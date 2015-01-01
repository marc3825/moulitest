#include <project.h>
#include <limits.h>
#include <signal.h>

static void test_hd_simple(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hd%hd", (short int)0, (short int)42);
}

static void test_hd_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hd", SHRT_MAX);
}

static void test_hd_min(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hd", SHRT_MIN);
}

static void test_hi_simple(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hi%hi", 0, 42);
}

static void test_hi_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hi", SHRT_MAX);
}

static void test_hi_min(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hi", SHRT_MIN);
}

static void test_hu_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hu, %hu", 0, USHRT_MAX);
}

static void test_ho_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%ho, %ho", 0, USHRT_MAX);
}

static void test_hx_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hx, %hx", 0, USHRT_MAX);
}

static void test_hX_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%hX, %hX", 0, USHRT_MAX);
}

void	suite_42_length_modif_h(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_hd_simple);
	SUITE_ADD_TEST(suite, test_hd_max);
	SUITE_ADD_TEST(suite, test_hd_min);

	SUITE_ADD_TEST(suite, test_hi_simple);
	SUITE_ADD_TEST(suite, test_hi_max);
	SUITE_ADD_TEST(suite, test_hi_min);

	SUITE_ADD_TEST(suite, test_hu_max);
	SUITE_ADD_TEST(suite, test_ho_max);
	SUITE_ADD_TEST(suite, test_hx_max);
	SUITE_ADD_TEST(suite, test_hX_max);
}