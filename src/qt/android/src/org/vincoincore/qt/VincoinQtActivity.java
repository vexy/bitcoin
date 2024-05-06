package org.vincoincore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class VincoinQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File vincoinDir = new File(getFilesDir().getAbsolutePath() + "/.vincoin");
        if (!vincoinDir.exists()) {
            vincoinDir.mkdir();
        }

        super.onCreate(savedInstanceState);
    }
}
