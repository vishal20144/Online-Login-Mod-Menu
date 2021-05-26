package com.example.loginform2;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.app.AlertDialog.Builder;
import android.content.Context;
import android.content.res.AssetManager;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.util.TypedValue;
import android.widget.LinearLayout.LayoutParams;
import android.widget.Button;
import android.widget.EditText;
import android.view.View;
import android.os.Process;
import android.widget.LinearLayout;
import android.widget.TextView;

import java.io.IOException;
import android.view.View.OnClickListener;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.text.method.PasswordTransformationMethod;
import android.widget.CheckBox;
import android.provider.Settings;
import android.os.Build;
import android.annotation.SuppressLint;
import android.app.AlertDialog;
import android.app.AlertDialog.Builder;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.os.Build.VERSION;
import android.os.Process;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.util.Base64;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.CompoundButton.OnCheckedChangeListener;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.LinearLayout.LayoutParams;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends Activity {

    private String Titulo = "Darky Modz";
    private String Sessao = "Coloque um login para iniciar Sessão";
    private String Email = "Usuario";
    private String Pass = "Senha";
    private String Salvar = "Salvar Login e Senha";
    private String MostrarSenha = "Mostrar Senha";
    private String Close = "Fechar";
    private String Logar = "Logar";
    Prefs prefs;
    public String sGameActivity = "com.unity3d.UnityPlayerActivity";

    private Button Fechar;
    private static String AutoLogin = null;
    private static String AutoSave = null;
    private static String AutoSenha = null;
    static Boolean Internet = Boolean.valueOf(false);
    private static Button Login = null;
    private static AlertDialog dialog = null;
    static String expiration = null;
    private static String link = "http://godsteam.net/auth";
    public static Editor mEditor = null;
    private static SharedPreferences mPreferences = null;
    static String password = null;
    private static String response = null;
    private static String token = null;
    static String username = null;
    private static String ver = "3.2.0";

    private native String URL();
    private native String Dialog();

    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        getWindow().setFlags(1024, 1024);
        System.loadLibrary("MyLib");
        Vendedores();
    }

    public void Login () {

        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setOrientation(1);
        linearLayout.setGravity(17);
        linearLayout.setLayoutParams(new LayoutParams(-1, -1));
        
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(Color.parseColor("#53AEFC"));
        setCornerRadius(gradientDrawable, 5.0f, 5.0f, 0.0f, 0.0f);
        LinearLayout linearLayout2 = new LinearLayout(this);
        linearLayout2.setOrientation(1);
        linearLayout2.setGravity(17);
        linearLayout2.setBackground(gradientDrawable);
        linearLayout2.setLayoutParams(new LayoutParams(-1, -2));
        linearLayout.addView(linearLayout2);
        
        TextView textView = new TextView(this);
        textView.setText(Titulo);
        textView.setTextSize(25.0f);
        textView.setTextColor(-1);
        textView.setGravity(17);
        textView.setPadding(0, 8, 0, 8);
        textView.setLayoutParams(new LayoutParams(-1, -2));
        linearLayout2.addView(textView);
        
        gradientDrawable = new GradientDrawable();
        gradientDrawable.setShape(0);
        gradientDrawable.setColor(0);
        gradientDrawable.setStroke(3, -7829368);
        gradientDrawable.setCornerRadius(8.0f);
        LinearLayout linearLayout3 = new LinearLayout(this);
        linearLayout3.setOrientation(1);
        linearLayout3.setGravity(17);
        linearLayout3.setPadding(8, 0, 8, 0);
        linearLayout3.setLayoutParams(new LayoutParams(-1, -2));
        linearLayout.addView(linearLayout3);
        TextView textView2 = new TextView(this);
        textView2.setText(Sessao);
        textView2.setTextSize(18.0f);
        textView2.setGravity(17);
        textView2.setTextColor(-16777216);
        textView2.setPadding(0, 8, 0, 5);
        textView2.setLayoutParams(new LayoutParams(-1, -2));
        linearLayout3.addView(textView2);
        
        final EditText editText = new EditText(this);
        editText.setHint(Email);
        editText.setHintTextColor(-16777216);
        editText.setTextColor(-16777216);
        editText.setBackground(gradientDrawable);
        editText.setPadding(8, 8, 8, 8);
        LayoutParams layoutParams = new LayoutParams(-1, -2);
        layoutParams.topMargin = 15;
        layoutParams.bottomMargin = 10;
        editText.setLayoutParams(layoutParams);
        final EditText editText2 = new EditText(this);
        editText2.setTransformationMethod(PasswordTransformationMethod.getInstance());
        editText2.setHint(Pass);
        editText2.setHintTextColor(-16777216);
        editText2.setTextColor(-16777216);
        editText2.setInputType(129);
        editText2.setBackground(gradientDrawable);
        editText2.setPadding(8, 8, 8, 8);
        editText2.setLayoutParams(new LayoutParams(-1, -2));
        CheckBox checkBox = new CheckBox(this);
        checkBox.setChecked(true);
        checkBox.setText(Salvar);
        checkBox.setTextColor(-16777216);
        checkBox.setLayoutParams(new LayoutParams(-1, -2));
        editText.setText(Prefs.with(this).read("USER"));
        editText2.setText(Prefs.with(this).read("PASS"));
        
        
        CheckBox checkBox2 = new CheckBox(this);
        checkBox2.setText(MostrarSenha);
        checkBox2.setTextColor(-16777216);
        checkBox2.setLayoutParams(new LayoutParams(-1, -2));
        checkBox2.setOnCheckedChangeListener(new OnCheckedChangeListener() {
                public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                    if (z) {
                        editText2.setInputType(144);
                    } else {
                        editText2.setInputType(129);
                    }
                }
            });
        LinearLayout linearLayout4 = new LinearLayout(this);
        linearLayout4.setGravity(5);
        linearLayout4.setLayoutParams(new LayoutParams(-1, -2));
        linearLayout4.setPadding(5, 5, 5, 5);
        linearLayout4.setOrientation(0);
        linearLayout.addView(linearLayout4);
        Fechar = new Button(this);
        Fechar.setText(Close);
        Fechar.setTextColor(-1);
        LayoutParams layoutParams2 = new LayoutParams(-2, -2);
        layoutParams2.rightMargin = 25;
        Fechar.setLayoutParams(layoutParams2);
        Fechar.setOnClickListener(new OnClickListener() {
                public void onClick(View view) {
                    System.exit(0);
                }
            });
            
        GradientDrawable gradientDrawable2 = new GradientDrawable();
        gradientDrawable2.setColor(Color.parseColor("#53AEFC"));
        setCornerRadius(gradientDrawable2, 4.0f, 4.0f, 4.0f, 4.0f);
        
        Button button = new Button(this);
        button.setText(Logar);
        button.setTextColor(-1);
        LayoutParams layoutParams3 = new LayoutParams(-2, -2);
        button.setBackground(gradientDrawable2);
        button.setLayoutParams(layoutParams3);
        
        
        linearLayout3.addView(editText);
        linearLayout3.addView(editText2);
        linearLayout3.addView(checkBox);
        linearLayout3.addView(checkBox2);
        linearLayout4.addView(button);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M && !Settings.canDrawOverlays(this)) {
            this.startActivity(new Intent("android.settings.action.MANAGE_OVERLAY_PERMISSION",
                                          Uri.parse("package:" + this.getPackageName())));
            Process.killProcess(Process.myPid());
        } else {


            Builder builder = new Builder(this);
            //builder.setTitle(string);
            builder.setCancelable(false);
            builder.setView(linearLayout);
            builder.show();
            button.setOnClickListener(new OnClickListener() {
                    public void onClick(View view) {
                        TryLoginPHP(editText.getText().toString(), editText2.getText().toString());
                    }

                });
            return;


        }

    }



    private void TryLoginPHP(String str, String str2) {
        prefs = Prefs.with(this);
        String USER = "USER";
        String PASS = "PASS";
        prefs.write(USER, str);
        prefs.write(PASS, str2);            
        new Auth(MainActivity.this).execute(str, str2);

    }

    public void Vendedores() {
        Builder builder = new Builder(this);
        builder.setTitle("Vendedores Oficiais");
        ScrollView scrollView = new ScrollView(this);
        scrollView.setLayoutParams(new LayoutParams(-1, -2));
        builder.setView(scrollView);
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setOrientation(1);
        linearLayout.setGravity(17);
        linearLayout.setLayoutParams(new LayoutParams(-1, -1));
        linearLayout.setPadding(5, 5, 5, 5);
        scrollView.addView(linearLayout);
        TextView textView = new TextView(this);
        textView.setText("Darky Modz");
        textView.setTextSize(15.0f);
        textView.setTextColor(-65536);
        textView.setTypeface(null, 1);
        textView.setGravity(17);
        textView.setLayoutParams(new LayoutParams(-2, -2));
        linearLayout.addView(textView);
        builder.setCancelable(false);
        builder.setPositiveButton("Okay", new DialogInterface.OnClickListener() {
                public void onClick(DialogInterface dialogInterface, int i) {
                    MainActivity.this.Login();
                }
            });
        builder.create().show();
    }

    private static void showInstalledAppDetails(Context context, String str) {
        try {
            Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
            StringBuilder stringBuilder = new StringBuilder();
            stringBuilder.append("package:");
            stringBuilder.append(str);
            intent.setData(Uri.parse(stringBuilder.toString()));
            context.startActivity(intent);
        } catch (ActivityNotFoundException unused) {
            context.startActivity(new Intent("android.settings.MANAGE_APPLICATIONS_SETTINGS"));
        }
    }
    

    public static void a(GradientDrawable var0, float var1, float var2, float var3, float var4) {
        var0.setCornerRadii(new float[]{var1, var1, var2, var2, var3, var3, var4, var4});
    }

    static void setCornerRadius(GradientDrawable gradientDrawable, float f) {
        gradientDrawable.setCornerRadius(f);
    }

    static void setCornerRadius(GradientDrawable gradientDrawable, float f, float f2, float f3, float f4) {
        gradientDrawable.setCornerRadii(new float[]{f, f, f2, f2, f3, f3, f4, f4});
    }

    public int getResID(String name, String type) {
        return getResources().getIdentifier(name, type, getPackageName());
    }

    public int getID(String name) {
        return getResID(name, "id");
    }


}


