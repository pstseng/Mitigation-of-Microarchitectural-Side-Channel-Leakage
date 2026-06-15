# Clopper Pearson Exact Method
import scipy.stats as stats

n = 200       
k = 0       

# Jeffreys Interval (Beta distribution parameters)
alpha = k + 0.5
beta_param = n - k + 0.5

ci_lower = stats.beta.ppf(0.025, alpha, beta_param) * 100
ci_upper = stats.beta.ppf(0.975, alpha, beta_param) * 100

print(f"Total Secrets : {n}")
print(f"Successes     : {k}")
print(f"Success Rate  : {(k/n)*100:.2f}%")
print(f"95% CI (Beta) : [{ci_lower:.2f}% , {ci_upper:.2f}%]")