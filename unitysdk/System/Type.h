#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberFilter; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }

#define SYSTEM_TYPE_METHOD_2_0298F7A836372689_OFFSET UNITYSDK_OFFSET(0x1930FE60)
#define SYSTEM_TYPE_METHOD_2_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0x1930D5E0)
#define SYSTEM_TYPE_METHOD_2_097C19FFD6761FAE_OFFSET UNITYSDK_OFFSET(0x1930BF70)
#define SYSTEM_TYPE_METHOD_2_09DACB09BF12FA39_OFFSET UNITYSDK_OFFSET(0x1930BCF0)
#define SYSTEM_TYPE_METHOD_2_0A0A3449BBEF67E8_OFFSET UNITYSDK_OFFSET(0x1930F420)
#define SYSTEM_TYPE_METHOD_2_0C3F7ABB64BEF122_OFFSET UNITYSDK_OFFSET(0x1930D260)
#define SYSTEM_TYPE_METHOD_2_0CB02E82D8088E69_OFFSET UNITYSDK_OFFSET(0x1930B5B0)
#define SYSTEM_TYPE_METHOD_2_0D3FA31517A13597_OFFSET UNITYSDK_OFFSET(0x1930B480)
#define SYSTEM_TYPE_METHOD_2_0F55D804EED8B1CB_OFFSET UNITYSDK_OFFSET(0x1930E420)
#define SYSTEM_TYPE_METHOD_2_106AAA0EC98942A9_OFFSET UNITYSDK_OFFSET(0x193015C0)
#define SYSTEM_TYPE_METHOD_2_11726621EC20B8A1_OFFSET UNITYSDK_OFFSET(0x1930DC60)
#define SYSTEM_TYPE_METHOD_2_12080E436B35722B_OFFSET UNITYSDK_OFFSET(0x19302220)
#define SYSTEM_TYPE_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1930F400)
#define SYSTEM_TYPE_METHOD_2_14D90F9EAA5338F5_OFFSET UNITYSDK_OFFSET(0x1930C340)
#define SYSTEM_TYPE_METHOD_2_15DF73ABED12C324_OFFSET UNITYSDK_OFFSET(0x192E76D0)
#define SYSTEM_TYPE_METHOD_2_16A2B3845235FA55_OFFSET UNITYSDK_OFFSET(0x1930B0E0)
#define SYSTEM_TYPE_METHOD_2_19658C3189E1936E_OFFSET UNITYSDK_OFFSET(0x1930C270)
#define SYSTEM_TYPE_METHOD_2_19F8A88108880A99_OFFSET UNITYSDK_OFFSET(0x192FECF0)
#define SYSTEM_TYPE_METHOD_2_1A8E6050C9A53DBB_OFFSET UNITYSDK_OFFSET(0x1930B430)
#define SYSTEM_TYPE_METHOD_2_1BFB32349816027D_OFFSET UNITYSDK_OFFSET(0x1930F4C0)
#define SYSTEM_TYPE_METHOD_2_1F9CF0B1087F1CF5_OFFSET UNITYSDK_OFFSET(0x1930BC70)
#define SYSTEM_TYPE_METHOD_2_2085A8E7752C4504_OFFSET UNITYSDK_OFFSET(0x1930B310)
#define SYSTEM_TYPE_METHOD_2_20D326BC3C6354D4_OFFSET UNITYSDK_OFFSET(0x1930ADC0)
#define SYSTEM_TYPE_METHOD_2_2213B9582589B042_OFFSET UNITYSDK_OFFSET(0x1930F890)
#define SYSTEM_TYPE_METHOD_2_2697B2D8B491A549_OFFSET UNITYSDK_OFFSET(0x1930B000)
#define SYSTEM_TYPE_METHOD_2_274AFBB8FBB350FB_OFFSET UNITYSDK_OFFSET(0x1930C650)
#define SYSTEM_TYPE_METHOD_2_30FF6A1E2EEC22D4_OFFSET UNITYSDK_OFFSET(0x1930EED0)
#define SYSTEM_TYPE_METHOD_2_356B1FEE9A0FD3FB_OFFSET UNITYSDK_OFFSET(0x1930C1A0)
#define SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1930D9E0)
#define SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x1930DB30)
#define SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x1930DB90)
#define SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1930D550)
#define SYSTEM_TYPE_METHOD_2_3BF382BB1E686F87_OFFSET UNITYSDK_OFFSET(0x1930F940)
#define SYSTEM_TYPE_METHOD_2_3C86C4C22DFC104C_OFFSET UNITYSDK_OFFSET(0x1930F330)
#define SYSTEM_TYPE_METHOD_2_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0x1930D4F0)
#define SYSTEM_TYPE_METHOD_2_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x1930C560)
#define SYSTEM_TYPE_METHOD_2_41C953C3DC1CA8A3_OFFSET UNITYSDK_OFFSET(0x1930BF30)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_1_OFFSET UNITYSDK_OFFSET(0x1930AEA0)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_2_OFFSET UNITYSDK_OFFSET(0x1930AEF0)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_3_OFFSET UNITYSDK_OFFSET(0x1930FD10)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_OFFSET UNITYSDK_OFFSET(0x1930AE00)
#define SYSTEM_TYPE_METHOD_2_46EC973EE97CF90C_OFFSET UNITYSDK_OFFSET(0x1930D2B0)
#define SYSTEM_TYPE_METHOD_2_46F5B968D22C49A2_OFFSET UNITYSDK_OFFSET(0x1930AF90)
#define SYSTEM_TYPE_METHOD_2_49E3FA61F17A6A16_OFFSET UNITYSDK_OFFSET(0x1930AD00)
#define SYSTEM_TYPE_METHOD_2_4C67A7C151A8D0DF_OFFSET UNITYSDK_OFFSET(0x1930E960)
#define SYSTEM_TYPE_METHOD_2_4FCA5BC476E1EB90_OFFSET UNITYSDK_OFFSET(0x1930C5D0)
#define SYSTEM_TYPE_METHOD_2_50591BD5CDB69ED6_OFFSET UNITYSDK_OFFSET(0x1930C4E0)
#define SYSTEM_TYPE_METHOD_2_564EB76CD896C3A1_OFFSET UNITYSDK_OFFSET(0x1930FD70)
#define SYSTEM_TYPE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1930B380)
#define SYSTEM_TYPE_METHOD_2_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x193049B0)
#define SYSTEM_TYPE_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x192FF840)
#define SYSTEM_TYPE_METHOD_2_64077BBBAC3C741E_OFFSET UNITYSDK_OFFSET(0x1930C540)
#define SYSTEM_TYPE_METHOD_2_65488F4A0BCFB646_OFFSET UNITYSDK_OFFSET(0x1930B230)
#define SYSTEM_TYPE_METHOD_2_658A7E0382F7B35F_OFFSET UNITYSDK_OFFSET(0x1930B6A0)
#define SYSTEM_TYPE_METHOD_2_67529902BB4E8D25_OFFSET UNITYSDK_OFFSET(0x19305DA0)
#define SYSTEM_TYPE_METHOD_2_6F0CF7A7B8D1AF17_OFFSET UNITYSDK_OFFSET(0x1930F6A0)
#define SYSTEM_TYPE_METHOD_2_6F63562FE5A293B9_OFFSET UNITYSDK_OFFSET(0x1930BB90)
#define SYSTEM_TYPE_METHOD_2_707E378E209AD3DB_OFFSET UNITYSDK_OFFSET(0x1930DAD0)
#define SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_1_OFFSET UNITYSDK_OFFSET(0x1930D780)
#define SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_OFFSET UNITYSDK_OFFSET(0x1930B550)
#define SYSTEM_TYPE_METHOD_2_76124F1172E53AA6_OFFSET UNITYSDK_OFFSET(0x1930C140)
#define SYSTEM_TYPE_METHOD_2_76D86C3B4084ED50_OFFSET UNITYSDK_OFFSET(0x1930FA40)
#define SYSTEM_TYPE_METHOD_2_77204B8F346C64B5_OFFSET UNITYSDK_OFFSET(0x1930DCC0)
#define SYSTEM_TYPE_METHOD_2_7886B044EB6D0826_OFFSET UNITYSDK_OFFSET(0x1930D8F0)
#define SYSTEM_TYPE_METHOD_2_7ADAE76435FA645D_OFFSET UNITYSDK_OFFSET(0x1930F7A0)
#define SYSTEM_TYPE_METHOD_2_7B8E1DF8F3A219F5_OFFSET UNITYSDK_OFFSET(0x1930B1C0)
#define SYSTEM_TYPE_METHOD_2_7BF3028CC7481A71_OFFSET UNITYSDK_OFFSET(0x19304F30)
#define SYSTEM_TYPE_METHOD_2_7C6826D9DBE5A703_OFFSET UNITYSDK_OFFSET(0x1930FA90)
#define SYSTEM_TYPE_METHOD_2_7CB420157B20CDB6_OFFSET UNITYSDK_OFFSET(0x1930DDC0)
#define SYSTEM_TYPE_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1930ACF0)
#define SYSTEM_TYPE_METHOD_2_8B8CF23767E9662A_OFFSET UNITYSDK_OFFSET(0x1930F470)
#define SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_1_OFFSET UNITYSDK_OFFSET(0x192FA700)
#define SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_OFFSET UNITYSDK_OFFSET(0x192F9660)
#define SYSTEM_TYPE_METHOD_2_8E6CB5045133FE7B_OFFSET UNITYSDK_OFFSET(0x1930C5A0)
#define SYSTEM_TYPE_METHOD_2_8F74C0EFB6973156_OFFSET UNITYSDK_OFFSET(0x1930B670)
#define SYSTEM_TYPE_METHOD_2_8FB7CA68F1D729F9_OFFSET UNITYSDK_OFFSET(0x1930DD20)
#define SYSTEM_TYPE_METHOD_2_8FEC3ACCA3C57C46_OFFSET UNITYSDK_OFFSET(0x1930AD80)
#define SYSTEM_TYPE_METHOD_2_9194AEB8C3EFB726_OFFSET UNITYSDK_OFFSET(0x1930FE10)
#define SYSTEM_TYPE_METHOD_2_951E6AEB335B97C7_OFFSET UNITYSDK_OFFSET(0x1930F050)
#define SYSTEM_TYPE_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1930F6E0)
#define SYSTEM_TYPE_METHOD_2_98C7EF1109EAC80E_OFFSET UNITYSDK_OFFSET(0x1930D250)
#define SYSTEM_TYPE_METHOD_2_9C631AB2D0F5AD03_OFFSET UNITYSDK_OFFSET(0x1930B2A0)
#define SYSTEM_TYPE_METHOD_2_9CD59C62BB547794_OFFSET UNITYSDK_OFFSET(0x1930F7F0)
#define SYSTEM_TYPE_METHOD_2_9DB8152063D37616_OFFSET UNITYSDK_OFFSET(0x1930B6C0)
#define SYSTEM_TYPE_METHOD_2_9E074B7A2129359B_OFFSET UNITYSDK_OFFSET(0x1930E510)
#define SYSTEM_TYPE_METHOD_2_A2663E1033B6557E_OFFSET UNITYSDK_OFFSET(0x1930C6A0)
#define SYSTEM_TYPE_METHOD_2_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1930AD30)
#define SYSTEM_TYPE_METHOD_2_A99467CE9479C990_2_OFFSET UNITYSDK_OFFSET(0x1930FD00)
#define SYSTEM_TYPE_METHOD_2_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1930AD10)
#define SYSTEM_TYPE_METHOD_2_B28E4D719DA9F08F_OFFSET UNITYSDK_OFFSET(0x1930DC00)
#define SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_1_OFFSET UNITYSDK_OFFSET(0x1930C580)
#define SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_OFFSET UNITYSDK_OFFSET(0x1930BCD0)
#define SYSTEM_TYPE_METHOD_2_B71F7BC2FBE92AD7_OFFSET UNITYSDK_OFFSET(0x1930C630)
#define SYSTEM_TYPE_METHOD_2_BAD0232A38D2B40C_OFFSET UNITYSDK_OFFSET(0x1930AF40)
#define SYSTEM_TYPE_METHOD_2_BAEBAAC39E7C795F_OFFSET UNITYSDK_OFFSET(0x1930BC00)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_1_OFFSET UNITYSDK_OFFSET(0x1930DA30)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_2_OFFSET UNITYSDK_OFFSET(0x1930DA80)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_3_OFFSET UNITYSDK_OFFSET(0x1930EDE0)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_4_OFFSET UNITYSDK_OFFSET(0x1930EE30)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_5_OFFSET UNITYSDK_OFFSET(0x1930EE80)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_6_OFFSET UNITYSDK_OFFSET(0x1930F8E0)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_OFFSET UNITYSDK_OFFSET(0x1930D720)
#define SYSTEM_TYPE_METHOD_2_BF13A921A74DE0E3_OFFSET UNITYSDK_OFFSET(0x1930EC40)
#define SYSTEM_TYPE_METHOD_2_BF772B1DF446DB82_OFFSET UNITYSDK_OFFSET(0x19303C70)
#define SYSTEM_TYPE_METHOD_2_C24B6AF6A1369F2B_OFFSET UNITYSDK_OFFSET(0x1930B400)
#define SYSTEM_TYPE_METHOD_2_C30F4551B136B988_OFFSET UNITYSDK_OFFSET(0x1930C410)
#define SYSTEM_TYPE_METHOD_2_C74EB1073E383038_OFFSET UNITYSDK_OFFSET(0x1930E3F0)
#define SYSTEM_TYPE_METHOD_2_C84AED655A605DE0_OFFSET UNITYSDK_OFFSET(0x1930F3F0)
#define SYSTEM_TYPE_METHOD_2_CBD3BA4E6CDFFC36_OFFSET UNITYSDK_OFFSET(0x1930F930)
#define SYSTEM_TYPE_METHOD_2_CC5BBD601CE3FB1E_OFFSET UNITYSDK_OFFSET(0x1930AD40)
#define SYSTEM_TYPE_METHOD_2_CFEBFFB58584A622_OFFSET UNITYSDK_OFFSET(0x1930B490)
#define SYSTEM_TYPE_METHOD_2_D0E5B8DF616291AC_OFFSET UNITYSDK_OFFSET(0x1930E350)
#define SYSTEM_TYPE_METHOD_2_D1BEE4831CE92503_OFFSET UNITYSDK_OFFSET(0x1930BC90)
#define SYSTEM_TYPE_METHOD_2_D2CD8D1EDDD0377E_OFFSET UNITYSDK_OFFSET(0x1930AE50)
#define SYSTEM_TYPE_METHOD_2_D6805DB983BC2080_OFFSET UNITYSDK_OFFSET(0x1930FDC0)
#define SYSTEM_TYPE_METHOD_2_D7170E267C4EC612_OFFSET UNITYSDK_OFFSET(0x1930B070)
#define SYSTEM_TYPE_METHOD_2_DC2EC27FF4027CD4_OFFSET UNITYSDK_OFFSET(0x1930BF50)
#define SYSTEM_TYPE_METHOD_2_DC3563BB998AAECC_OFFSET UNITYSDK_OFFSET(0x1930B3C0)
#define SYSTEM_TYPE_METHOD_2_DC661F0021CCF5E8_OFFSET UNITYSDK_OFFSET(0x1930BCB0)
#define SYSTEM_TYPE_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x1930D7E0)
#define SYSTEM_TYPE_METHOD_2_DEC97467B102C4FA_OFFSET UNITYSDK_OFFSET(0x1930B700)
#define SYSTEM_TYPE_METHOD_2_DFD406CADA0B7F84_OFFSET UNITYSDK_OFFSET(0x1930F740)
#define SYSTEM_TYPE_METHOD_2_E3F888547230D911_OFFSET UNITYSDK_OFFSET(0x1930B950)
#define SYSTEM_TYPE_METHOD_2_E48A585A7EF26F1D_OFFSET UNITYSDK_OFFSET(0x1930AD20)
#define SYSTEM_TYPE_METHOD_2_E68ABE36B8716232_OFFSET UNITYSDK_OFFSET(0x1930F000)
#define SYSTEM_TYPE_METHOD_2_E7E0C74A0CD9BD3B_OFFSET UNITYSDK_OFFSET(0x1930B850)
#define SYSTEM_TYPE_METHOD_2_E89E41CA009424F7_OFFSET UNITYSDK_OFFSET(0x1930F840)
#define SYSTEM_TYPE_METHOD_2_EED4C8FA39B90919_OFFSET UNITYSDK_OFFSET(0x1930C060)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_10_OFFSET UNITYSDK_OFFSET(0x1930D4B0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_11_OFFSET UNITYSDK_OFFSET(0x1930D4D0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_12_OFFSET UNITYSDK_OFFSET(0x19304900)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_13_OFFSET UNITYSDK_OFFSET(0x19305270)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_14_OFFSET UNITYSDK_OFFSET(0x1930D530)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_15_OFFSET UNITYSDK_OFFSET(0x1930D5A0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_16_OFFSET UNITYSDK_OFFSET(0x1930D5C0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_17_OFFSET UNITYSDK_OFFSET(0x1930D670)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_18_OFFSET UNITYSDK_OFFSET(0x1930D690)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_19_OFFSET UNITYSDK_OFFSET(0x1930D6C0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19303D40)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_20_OFFSET UNITYSDK_OFFSET(0x192FB4F0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_21_OFFSET UNITYSDK_OFFSET(0x1930D6F0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_22_OFFSET UNITYSDK_OFFSET(0x1930D700)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_23_OFFSET UNITYSDK_OFFSET(0x1930D710)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_24_OFFSET UNITYSDK_OFFSET(0x1930D770)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_25_OFFSET UNITYSDK_OFFSET(0x192FA9A0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_26_OFFSET UNITYSDK_OFFSET(0x192F9670)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_27_OFFSET UNITYSDK_OFFSET(0x19303CE0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_28_OFFSET UNITYSDK_OFFSET(0x1930D980)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_29_OFFSET UNITYSDK_OFFSET(0x1930D990)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x192FB1E0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_30_OFFSET UNITYSDK_OFFSET(0x1930D9A0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_31_OFFSET UNITYSDK_OFFSET(0x19306040)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_32_OFFSET UNITYSDK_OFFSET(0x1930D9B0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_33_OFFSET UNITYSDK_OFFSET(0x1930D9C0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_34_OFFSET UNITYSDK_OFFSET(0x1930D9D0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_35_OFFSET UNITYSDK_OFFSET(0x1930DBF0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_36_OFFSET UNITYSDK_OFFSET(0x1930FD60)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x192FB1C0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1930D410)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1930D430)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x192FB200)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1930D450)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_8_OFFSET UNITYSDK_OFFSET(0x1930D470)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_9_OFFSET UNITYSDK_OFFSET(0x1930D490)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19303CC0)
#define SYSTEM_TYPE_METHOD_2_F1A6FBCC0E089234_OFFSET UNITYSDK_OFFSET(0x1930B150)
#define SYSTEM_TYPE_METHOD_2_F5B5922AF03D233C_OFFSET UNITYSDK_OFFSET(0x1930F650)
#define SYSTEM_TYPE_METHOD_2_F7B9DA4F29BE6F32_OFFSET UNITYSDK_OFFSET(0x1930F090)
#define SYSTEM_TYPE_METHOD_2_F8ED142F54C0DCEC_OFFSET UNITYSDK_OFFSET(0x1930FE80)
#define SYSTEM_TYPE_METHOD_2_FC23EB45272D095B_OFFSET UNITYSDK_OFFSET(0x192ED830)
#define SYSTEM_TYPE_METHOD_2_FF7B95723520E897_OFFSET UNITYSDK_OFFSET(0x1930BA90)

namespace System
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 339;

	class Type : public ::System::Reflection::MemberInfo
	{
	public:
		static ::System::Reflection::MemberFilter** StaticGet_Field_2_0()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_2_2()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_2_1()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Object** StaticGet_Field_2_3()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_Field_2_5()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Reflection::Binder** StaticGet_Field_2_6()
		{
			return (::System::Reflection::Binder**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Char* StaticGet_Field_2_4()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x140);
		}
		// static const ::System::Reflection::BindingFlags Field_2_7; // 0x0
		// static const ::System::Reflection::BindingFlags Field_2_8; // 0x0
		::System::RuntimeTypeHandle Field_2_9; // 0x10

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		static ::System::Void Method_2_F8ED142F54C0DCEC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F8ED142F54C0DCEC_OFFSET))();
		}

		::System::Reflection::MemberTypes Method_2_49E3FA61F17A6A16()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_49E3FA61F17A6A16_OFFSET))(this);
		}

		::System::Type* Method_2_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A99467CE9479C990_OFFSET))(this);
		}

		::System::Reflection::MethodBase* Method_2_E48A585A7EF26F1D()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E48A585A7EF26F1D_OFFSET))(this);
		}

		::System::Type* Method_2_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A99467CE9479C990_1_OFFSET))(this);
		}

		static ::System::Type* Method_2_CC5BBD601CE3FB1E(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_CC5BBD601CE3FB1E_OFFSET))(typeName, assemblyResolver, typeResolver);
		}

		static ::System::Type* Method_2_8FEC3ACCA3C57C46(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8FEC3ACCA3C57C46_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError);
		}

		static ::System::Type* Method_2_20D326BC3C6354D4(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_20D326BC3C6354D4_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase);
		}

		::System::Type* Method_2_441D6FB69D162BCC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* Method_2_D2CD8D1EDDD0377E()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D2CD8D1EDDD0377E_OFFSET))(this);
		}

		::System::Type* Method_2_441D6FB69D162BCC_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_1_OFFSET))(this);
		}

		::System::Type* Method_2_441D6FB69D162BCC_2()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_2_OFFSET))(this);
		}

		::System::Type* Method_2_BAD0232A38D2B40C(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BAD0232A38D2B40C_OFFSET))(this, rank);
		}

		static ::System::Type* Method_2_46F5B968D22C49A2(::System::String* progID)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_46F5B968D22C49A2_OFFSET))(progID);
		}

		static ::System::Type* Method_2_2697B2D8B491A549(::System::String* progID, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_2697B2D8B491A549_OFFSET))(progID, throwOnError);
		}

		static ::System::Type* Method_2_D7170E267C4EC612(::System::String* progID, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D7170E267C4EC612_OFFSET))(progID, server);
		}

		static ::System::Type* Method_2_16A2B3845235FA55(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_16A2B3845235FA55_OFFSET))(progID, server, throwOnError);
		}

		static ::System::Type* Method_2_F1A6FBCC0E089234(::System::Guid clsid)
		{
			return ((::System::Type*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F1A6FBCC0E089234_OFFSET))(clsid);
		}

		static ::System::Type* Method_2_7B8E1DF8F3A219F5(::System::Guid clsid, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7B8E1DF8F3A219F5_OFFSET))(clsid, throwOnError);
		}

		static ::System::Type* Method_2_65488F4A0BCFB646(::System::Guid clsid, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_65488F4A0BCFB646_OFFSET))(clsid, server);
		}

		static ::System::Type* Method_2_9C631AB2D0F5AD03(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9C631AB2D0F5AD03_OFFSET))(clsid, server, throwOnError);
		}

		static ::System::TypeCode Method_2_67529902BB4E8D25(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_67529902BB4E8D25_OFFSET))(type);
		}

		::System::TypeCode Method_2_2085A8E7752C4504()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_2085A8E7752C4504_OFFSET))(this);
		}

		static ::System::Reflection::Binder* Method_2_19F8A88108880A99()
		{
			return ((::System::Reflection::Binder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_19F8A88108880A99_OFFSET))();
		}

		static ::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_5790A55946AA509D_OFFSET))();
		}

		::System::Object* Method_2_DC3563BB998AAECC(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DC3563BB998AAECC_OFFSET))(this, name, invokeAttr, binder, target, args, culture);
		}

		::System::Object* Method_2_C24B6AF6A1369F2B(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C24B6AF6A1369F2B_OFFSET))(this, name, invokeAttr, binder, target, args);
		}

		::System::RuntimeTypeHandle Method_2_1A8E6050C9A53DBB()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1A8E6050C9A53DBB_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_2_0D3FA31517A13597()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0D3FA31517A13597_OFFSET))(this);
		}

		static ::System::RuntimeTypeHandle Method_2_CFEBFFB58584A622(::System::Object* o)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_CFEBFFB58584A622_OFFSET))(o);
		}

		::System::Int32 Method_2_7202D45B87B95D58()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* Method_2_7BF3028CC7481A71(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7BF3028CC7481A71_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_2_0CB02E82D8088E69(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0CB02E82D8088E69_OFFSET))(this, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_2_8F74C0EFB6973156(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8F74C0EFB6973156_OFFSET))(this, types);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* Method_2_658A7E0382F7B35F()
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_658A7E0382F7B35F_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* Method_2_9DB8152063D37616()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9DB8152063D37616_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_DEC97467B102C4FA(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DEC97467B102C4FA_OFFSET))(this, name, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_2_E7E0C74A0CD9BD3B(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E7E0C74A0CD9BD3B_OFFSET))(this, name, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_2_E3F888547230D911(::System::String* name, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E3F888547230D911_OFFSET))(this, name, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_2_FF7B95723520E897(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_FF7B95723520E897_OFFSET))(this, name, types);
		}

		::System::Reflection::MethodInfo* Method_2_6F63562FE5A293B9(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_6F63562FE5A293B9_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::MethodInfo* Method_2_BAEBAAC39E7C795F(::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BAEBAAC39E7C795F_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_2_1F9CF0B1087F1CF5()
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1F9CF0B1087F1CF5_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* Method_2_D1BEE4831CE92503(::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D1BEE4831CE92503_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* Method_2_DC661F0021CCF5E8()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DC661F0021CCF5E8_OFFSET))(this);
		}

		::System::Type* Method_2_B4C5A97F5D5A4EBC(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Type*>* Method_2_09DACB09BF12FA39(::System::Reflection::TypeFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::TypeFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_09DACB09BF12FA39_OFFSET))(this, filter, filterCriteria);
		}

		::System::Reflection::EventInfo* Method_2_41C953C3DC1CA8A3(::System::String* name)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_41C953C3DC1CA8A3_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* Method_2_DC2EC27FF4027CD4()
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DC2EC27FF4027CD4_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* Method_2_097C19FFD6761FAE(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_097C19FFD6761FAE_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_2_EED4C8FA39B90919(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_EED4C8FA39B90919_OFFSET))(this, name, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_2_76124F1172E53AA6(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_76124F1172E53AA6_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::PropertyInfo* Method_2_356B1FEE9A0FD3FB(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_356B1FEE9A0FD3FB_OFFSET))(this, name, returnType, types);
		}

		::System::Reflection::PropertyInfo* Method_2_19658C3189E1936E(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_19658C3189E1936E_OFFSET))(this, name, types);
		}

		::System::Reflection::PropertyInfo* Method_2_14D90F9EAA5338F5(::System::String* name, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_14D90F9EAA5338F5_OFFSET))(this, name, returnType);
		}

		::System::Reflection::PropertyInfo* Method_2_C30F4551B136B988(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C30F4551B136B988_OFFSET))(this, name, bindingAttr, returnType);
		}

		::System::Reflection::PropertyInfo* Method_2_50591BD5CDB69ED6(::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_50591BD5CDB69ED6_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_2_64077BBBAC3C741E()
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_64077BBBAC3C741E_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_3EACA5870CDCB012()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3EACA5870CDCB012_OFFSET))(this);
		}

		::System::Type* Method_2_B4C5A97F5D5A4EBC_1(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_1_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_12080E436B35722B(::System::String* name)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_12080E436B35722B_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_8E6CB5045133FE7B(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8E6CB5045133FE7B_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_4FCA5BC476E1EB90(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_4FCA5BC476E1EB90_OFFSET))(this, name, type, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_B71F7BC2FBE92AD7()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B71F7BC2FBE92AD7_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_274AFBB8FBB350FB()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_274AFBB8FBB350FB_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_A2663E1033B6557E(::System::Reflection::MemberTypes memberType, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::MemberFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags, ::System::Reflection::MemberFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A2663E1033B6557E_OFFSET))(this, memberType, bindingAttr, filter, filterCriteria);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes Method_2_98C7EF1109EAC80E()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_98C7EF1109EAC80E_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes Method_2_0C3F7ABB64BEF122()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0C3F7ABB64BEF122_OFFSET))(this);
		}

		::System::Boolean Method_2_46EC973EE97CF90C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_46EC973EE97CF90C_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_7_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_8_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_9_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_10()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_10_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_11_OFFSET))(this);
		}

		::System::Boolean Method_2_3E51EEFB06718274()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3E51EEFB06718274_OFFSET))(this);
		}

		::System::Boolean Method_2_5E72916301E347E2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_5E72916301E347E2_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_12()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_12_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_13()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_13_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_14()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_14_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_15()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_15_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_16()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_16_OFFSET))(this);
		}

		::System::Boolean Method_2_09526F48C04056C9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_09526F48C04056C9_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_17()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_17_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_18()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_18_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_19()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_19_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_20()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_20_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_21()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_21_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_22()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_22_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_23()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_23_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_24()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_24_OFFSET))(this);
		}

		::System::Int32 Method_2_7202D45B87B95D58_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_1_OFFSET))(this);
		}

		::System::Boolean Method_2_DD1EE3A48E307831()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_7886B044EB6D0826()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7886B044EB6D0826_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_25()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_25_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_26()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_26_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_27()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_27_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_28()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_28_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_29()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_29_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_30()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_30_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_31()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_31_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_32()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_32_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_33()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_33_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_34()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_34_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_1_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_2_OFFSET))(this);
		}

		::System::Type* Method_2_707E378E209AD3DB(::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_707E378E209AD3DB_OFFSET))(this, typeArguments);
		}

		::System::Boolean Method_2_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_35()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_35_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_B28E4D719DA9F08F()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B28E4D719DA9F08F_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_11726621EC20B8A1()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_11726621EC20B8A1_OFFSET))(this);
		}

		::System::Type* Method_2_77204B8F346C64B5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_77204B8F346C64B5_OFFSET))(this);
		}

		::System::Type* Method_2_BF772B1DF446DB82()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BF772B1DF446DB82_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_2_8FB7CA68F1D729F9()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8FB7CA68F1D729F9_OFFSET))(this);
		}

		::System::Array* Method_2_D0E5B8DF616291AC()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D0E5B8DF616291AC_OFFSET))(this);
		}

		::System::Array* Method_2_C74EB1073E383038()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C74EB1073E383038_OFFSET))(this);
		}

		::System::Void Method_2_7CB420157B20CDB6(::Il2CppArray<::System::String*>*& enumNames, ::System::Array*& enumValues)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::System::Array*&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7CB420157B20CDB6_OFFSET))(this, enumNames, enumValues);
		}

		::System::Type* Method_2_0F55D804EED8B1CB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0F55D804EED8B1CB_OFFSET))(this);
		}

		::System::Boolean Method_2_9E074B7A2129359B(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9E074B7A2129359B_OFFSET))(this, value);
		}

		::System::String* Method_2_BF13A921A74DE0E3(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BF13A921A74DE0E3_OFFSET))(this, value);
		}

		static ::System::Int32 Method_2_4C67A7C151A8D0DF(::System::Array* array, ::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_4C67A7C151A8D0DF_OFFSET))(array, value);
		}

		static ::System::Boolean Method_2_106AAA0EC98942A9(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_106AAA0EC98942A9_OFFSET))(t);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_3_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_4_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_5_OFFSET))(this);
		}

		::System::Boolean Method_2_30FF6A1E2EEC22D4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_30FF6A1E2EEC22D4_OFFSET))(this);
		}

		::System::Boolean Method_2_E68ABE36B8716232(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E68ABE36B8716232_OFFSET))(this, c);
		}

		::System::Boolean Method_2_951E6AEB335B97C7(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_951E6AEB335B97C7_OFFSET))(this, o);
		}

		::System::Boolean Method_2_F7B9DA4F29BE6F32(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F7B9DA4F29BE6F32_OFFSET))(this, c);
		}

		::System::Boolean Method_2_C84AED655A605DE0(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C84AED655A605DE0_OFFSET))(this, other);
		}

		::System::Boolean Method_2_3C86C4C22DFC104C(::System::Type* ifaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3C86C4C22DFC104C_OFFSET))(this, ifaceType);
		}

		::System::String* Method_2_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_2_0A0A3449BBEF67E8(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0A0A3449BBEF67E8_OFFSET))(this, serialization);
		}

		::System::String* Method_2_8B8CF23767E9662A()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8B8CF23767E9662A_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* Method_2_1BFB32349816027D(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1BFB32349816027D_OFFSET))(args);
		}

		::System::Boolean Method_2_F5B5922AF03D233C(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F5B5922AF03D233C_OFFSET))(this, o);
		}

		::System::Boolean Method_2_6F0CF7A7B8D1AF17(::System::Type* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_6F0CF7A7B8D1AF17_OFFSET))(this, o);
		}

		static ::System::Boolean Method_2_8C387B4DBE4B1BEB(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_8C387B4DBE4B1BEB_1(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_1_OFFSET))(left, right);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Reflection::InterfaceMapping Method_2_DFD406CADA0B7F84(::System::Type* interfaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DFD406CADA0B7F84_OFFSET))(this, interfaceType);
		}

		::System::Type* Method_2_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_5C90471BE03E101A_OFFSET))(this);
		}

		::System::Void Method_2_7ADAE76435FA645D(::System::UInt32& pcTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7ADAE76435FA645D_OFFSET))(this, pcTInfo);
		}

		::System::Void Method_2_9CD59C62BB547794(::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9CD59C62BB547794_OFFSET))(this, iTInfo, lcid, ppTInfo);
		}

		::System::Void Method_2_E89E41CA009424F7(::System::Guid& riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E89E41CA009424F7_OFFSET))(this, riid, rgszNames, cNames, lcid, rgDispId);
		}

		::System::Void Method_2_2213B9582589B042(::System::UInt32 dispIdMember, ::System::Guid& riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_2213B9582589B042_OFFSET))(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_6_OFFSET))(this);
		}

		static ::System::Type* Method_2_CBD3BA4E6CDFFC36(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_CBD3BA4E6CDFFC36_OFFSET))(name, throwOnError, ignoreCase);
		}

		static ::System::Type* Method_2_15DF73ABED12C324(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_15DF73ABED12C324_OFFSET))(typeName);
		}

		static ::System::Type* Method_2_76D86C3B4084ED50(::System::String* typeName, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_76D86C3B4084ED50_OFFSET))(typeName, throwOnError);
		}

		static ::System::Type* Method_2_3BF382BB1E686F87(::System::String* typeName, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3BF382BB1E686F87_OFFSET))(typeName, throwOnError, ignoreCase);
		}

		static ::System::Type* Method_2_7C6826D9DBE5A703(::System::String* typeName, ::System::Boolean throwIfNotFound, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7C6826D9DBE5A703_OFFSET))(typeName, throwIfNotFound, ignoreCase);
		}

		::System::Type* Method_2_A99467CE9479C990_2()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A99467CE9479C990_2_OFFSET))(this);
		}

		::System::Type* Method_2_441D6FB69D162BCC_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_36()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_36_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_564EB76CD896C3A1(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_564EB76CD896C3A1_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* Method_2_D6805DB983BC2080(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D6805DB983BC2080_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* Method_2_9194AEB8C3EFB726(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9194AEB8C3EFB726_OFFSET))(this, fromNoninstanciated);
		}

		static ::System::Type* Method_2_FC23EB45272D095B(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Type*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_FC23EB45272D095B_OFFSET))(handle);
		}

		static ::System::Type* Method_2_0298F7A836372689(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0298F7A836372689_OFFSET))(handle);
		}
	};
}
