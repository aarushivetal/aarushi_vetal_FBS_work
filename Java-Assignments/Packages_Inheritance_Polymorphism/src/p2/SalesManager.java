package p2;

import p1.Employee;

public class SalesManager extends Employee {
	
	private double incentive;
    private double target;
    
    public SalesManager(int id, String name, double salary,double incentive, double target) {
			super(id, name, salary);
			this.incentive = incentive;
			this.target = target;
    	}
    
    public double getIncentive() {
        return incentive;
    }

    public void setIncentive(double incentive) {
        this.incentive = incentive;
    }

    public double getTarget() {
        return target;
    }

    public void setTarget(double target) {
        this.target = target;
    }
    
    public double calSal()
    {
    	return salary + incentive + (target * 0.05);
    }
    
    public String toString() {
        return "SalesManager [id=" + id +
                ", name=" + name +
                ", salary=" + salary +
                ", incentive=" + incentive +
                ", target=" + target +
                ", Total salary=" + calSal() + "]";
    }


}
