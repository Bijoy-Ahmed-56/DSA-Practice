class Patient {
    String patientName;

    Patient(String name) {
        patientName = name;
    }

}

class Doctor {
    private String doctorName;

    Doctor(String name) {
        doctorName = name;
    }

    void treatment(Patient name) {
        System.out.println(doctorName + " provides treatment to patient " + name.patientName);
    }
}

public class Association {
    public static void main(String[] args) {

        Patient p = new Patient("Bijoy");
        Doctor d = new Doctor("Doom");

        d.treatment(p);

    }

}
