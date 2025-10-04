class Main {
  public static void main(String[] args) {
    String v1 = "hello";
    String v2 = new String("hello");
    String v3 = "Hello"; // same reference as variable v1
    v3 = new String("Nice one");

    // STRING POOL = [obj1 "v1"] 
    // MEMORY = [obj2 "v1"]

    if (v1 == v2) {
      System.out.println("v1 == v2: true");
    } else {
      System.out.println("v1 == v2: false");
    }

    if (v1 == v3) {
      System.out.println("v1 == v3: true");
    } else {
      System.out.println("v1 == v3: false");
    }

    if (v1.equals(v2)) {
      System.out.println("v1.equals(v2): true");
    } else {
      System.out.println("v1.equals(v2): false");
    }

    if (v1.equals(v3)) {
      System.out.println("v1.equals(v3): true");
    } else {
      System.out.println("v1.equals(v3): false");
    }
  }
}

