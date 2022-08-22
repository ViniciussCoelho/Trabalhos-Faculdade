package client;

import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.net.URL;
import java.net.URLConnection;

public class ImageClient {
    private String imgUrl;
    private Runnable runnable;
    private ImageClientListener listener;

    public ImageClient() {
        runnable = () -> {
            try {
                Image response = getImgFromUrl(imgUrl);
                if(listener != null) {
                    listener.imageLoaded(response);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        };
    }

    public void setListener(ImageClientListener listener) {
        this.listener = listener;
    }

    public BufferedImage getImgFromUrl(String posterUrl) throws IOException {
        URLConnection connection = (new URL(posterUrl)).openConnection();
        return ImageIO.read(connection.getInputStream());
    }

    public void getImage(String imgUrl) {
        this.imgUrl = imgUrl;
        (new Thread(runnable)).start();
    }
}
