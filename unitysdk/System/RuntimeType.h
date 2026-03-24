#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Reflection/TypeInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/RuntimeType_ListBuilder_1.h"
#include "unitysdk/System/RuntimeType_MemberListType.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/TypeNameKind.h"

namespace System { class Array; }
namespace System { class MonoTypeInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class MonoCMethod; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeConstructorInfo; }
namespace System::Reflection { class RuntimeEventInfo; }
namespace System::Reflection { class RuntimeFieldInfo; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Reflection { class RuntimePropertyInfo; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPE_METHOD_4_060A11F80A43F597_OFFSET UNITYSDK_OFFSET(0x193066B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_073DD9BB0734A6ED_OFFSET UNITYSDK_OFFSET(0x19305260)
#define SYSTEM_RUNTIMETYPE_METHOD_4_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x19303760)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0B3E7709264544D7_OFFSET UNITYSDK_OFFSET(0x192FED40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0B822C3378BBB549_OFFSET UNITYSDK_OFFSET(0x193049F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0B95BBA0C641425A_OFFSET UNITYSDK_OFFSET(0x192FB270)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0DE48B629D359F8A_OFFSET UNITYSDK_OFFSET(0x19305DC0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1155B2A0E7763DA5_OFFSET UNITYSDK_OFFSET(0x19304910)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x193036C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_18BA888AB214BADA_OFFSET UNITYSDK_OFFSET(0x19300C80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1AD9A7FE82660E8B_OFFSET UNITYSDK_OFFSET(0x19300D60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1B3FE7116CFD1F68_OFFSET UNITYSDK_OFFSET(0x192FF8C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1C0B3B154EF753FD_OFFSET UNITYSDK_OFFSET(0x19301E60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_1_OFFSET UNITYSDK_OFFSET(0x19306770)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_OFFSET UNITYSDK_OFFSET(0x19306760)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2178613F97FA6C87_OFFSET UNITYSDK_OFFSET(0x19301940)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2381A80250E5EB20_OFFSET UNITYSDK_OFFSET(0x192FAD70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2419027A1B6A289C_OFFSET UNITYSDK_OFFSET(0x19306660)
#define SYSTEM_RUNTIMETYPE_METHOD_4_247EE95BB171CB15_OFFSET UNITYSDK_OFFSET(0x192FFD70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_25669C2F5FCF3304_OFFSET UNITYSDK_OFFSET(0x19300B00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_299BBAE2E9EA23BB_OFFSET UNITYSDK_OFFSET(0x19306780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2E6C4B90624A96FA_OFFSET UNITYSDK_OFFSET(0x192FB620)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2EF36975534D3ECF_OFFSET UNITYSDK_OFFSET(0x192FFD60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_36DCEB2D7FEF7FC8_OFFSET UNITYSDK_OFFSET(0x19306750)
#define SYSTEM_RUNTIMETYPE_METHOD_4_37FEDDCB949F4EEC_OFFSET UNITYSDK_OFFSET(0x192FDE70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x192FB550)
#define SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x19300BA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x19300BE0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19300A10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3975AE8266EC191B_OFFSET UNITYSDK_OFFSET(0x19301950)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3A0A3239997E45A2_OFFSET UNITYSDK_OFFSET(0x192FE630)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3D7064D5675597EA_OFFSET UNITYSDK_OFFSET(0x193064D0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4008CCD07F07FB16_OFFSET UNITYSDK_OFFSET(0x192FC8C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x19302080)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x19303DA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0x19302170)
#define SYSTEM_RUNTIMETYPE_METHOD_4_49C1B4B9219A5DC1_OFFSET UNITYSDK_OFFSET(0x19303840)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4ACE462D3A32946C_OFFSET UNITYSDK_OFFSET(0x193065C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x19305F40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4FB5F56430673EA6_2_OFFSET UNITYSDK_OFFSET(0x19305FE0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x19305E20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_509C16745FEC5D38_OFFSET UNITYSDK_OFFSET(0x192FEF30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_525FF34EB81A284C_OFFSET UNITYSDK_OFFSET(0x193053F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_52A6E8F5E2C154FA_OFFSET UNITYSDK_OFFSET(0x193066F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_52D83F92395E4FF4_OFFSET UNITYSDK_OFFSET(0x192FF320)
#define SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_1_OFFSET UNITYSDK_OFFSET(0x19306790)
#define SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_OFFSET UNITYSDK_OFFSET(0x192FA9B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5612F26DCB691197_OFFSET UNITYSDK_OFFSET(0x19306180)
#define SYSTEM_RUNTIMETYPE_METHOD_4_56416F3130FC7F17_OFFSET UNITYSDK_OFFSET(0x192FEA30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_56963593147B7C4E_OFFSET UNITYSDK_OFFSET(0x193049C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5980B3E99AC3DEF5_OFFSET UNITYSDK_OFFSET(0x192FE7A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5B25F8ADDC27882E_OFFSET UNITYSDK_OFFSET(0x192FE120)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5C33F0F1C4BA96FD_OFFSET UNITYSDK_OFFSET(0x19303AA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x19305F20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5D09C4A124F9D549_OFFSET UNITYSDK_OFFSET(0x19300830)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6211F78CB1276418_OFFSET UNITYSDK_OFFSET(0x192FFD80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_631F7AFB57B3049C_OFFSET UNITYSDK_OFFSET(0x19300FB0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_643D25EB51727889_OFFSET UNITYSDK_OFFSET(0x192FB490)
#define SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_1_OFFSET UNITYSDK_OFFSET(0x19300500)
#define SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_OFFSET UNITYSDK_OFFSET(0x193004E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6676BF79100271CF_OFFSET UNITYSDK_OFFSET(0x193064E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_68346D56932A893F_OFFSET UNITYSDK_OFFSET(0x192FF170)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6A55E2EC0B972AAB_OFFSET UNITYSDK_OFFSET(0x19300E30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6ACCDE9BF52FCC3E_OFFSET UNITYSDK_OFFSET(0x19300520)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6ACCE05522A55B89_OFFSET UNITYSDK_OFFSET(0x193008A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6EF7E865134D13A9_OFFSET UNITYSDK_OFFSET(0x192FE690)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7014EAF47262682A_OFFSET UNITYSDK_OFFSET(0x19304130)
#define SYSTEM_RUNTIMETYPE_METHOD_4_772ABBEDF7F0E0E1_OFFSET UNITYSDK_OFFSET(0x193061A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7999019A63725FEC_OFFSET UNITYSDK_OFFSET(0x19304B60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7A23B97866F2B18C_OFFSET UNITYSDK_OFFSET(0x19305FB0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_1_OFFSET UNITYSDK_OFFSET(0x19303D70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_OFFSET UNITYSDK_OFFSET(0x19303D60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_801D806FFB84DEB1_OFFSET UNITYSDK_OFFSET(0x19300890)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8430DE1649B0E144_OFFSET UNITYSDK_OFFSET(0x192FD7A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8943C0FE993200B9_OFFSET UNITYSDK_OFFSET(0x19300CF0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8AFFA6FB25A13B67_OFFSET UNITYSDK_OFFSET(0x19303780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8B324C1EA3243DDF_OFFSET UNITYSDK_OFFSET(0x193061B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8D149B6F29738C40_OFFSET UNITYSDK_OFFSET(0x19304C50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8E4C7EE3D9864FC7_OFFSET UNITYSDK_OFFSET(0x19300770)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8E8968EE5607D47F_OFFSET UNITYSDK_OFFSET(0x192FE750)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8E8E14DAC76FD795_OFFSET UNITYSDK_OFFSET(0x192FA8C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8ED7634FF4DC23E1_OFFSET UNITYSDK_OFFSET(0x19303930)
#define SYSTEM_RUNTIMETYPE_METHOD_4_95E37F1410C9DE8F_OFFSET UNITYSDK_OFFSET(0x192FE7F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_968CB3656A8D61F8_OFFSET UNITYSDK_OFFSET(0x19305040)
#define SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_1_OFFSET UNITYSDK_OFFSET(0x192FB950)
#define SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_OFFSET UNITYSDK_OFFSET(0x192F9680)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9869262B801A8B94_OFFSET UNITYSDK_OFFSET(0x19301900)
#define SYSTEM_RUNTIMETYPE_METHOD_4_98C7EF1109EAC80E_OFFSET UNITYSDK_OFFSET(0x193009F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_990705E1285E5D7E_OFFSET UNITYSDK_OFFSET(0x192FAED0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9BDC695756CA7615_OFFSET UNITYSDK_OFFSET(0x19301090)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9C30238B90F0DF72_OFFSET UNITYSDK_OFFSET(0x19304CD0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9D9B4B9508B30842_OFFSET UNITYSDK_OFFSET(0x19300460)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9DD818AECA498807_OFFSET UNITYSDK_OFFSET(0x192FB960)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A0B2C8B62794E4BE_OFFSET UNITYSDK_OFFSET(0x19304BE0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A0C3C07C9CC06B0B_OFFSET UNITYSDK_OFFSET(0x192FBC80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A2497175640B6EA8_OFFSET UNITYSDK_OFFSET(0x19300050)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A3896E84665005EF_OFFSET UNITYSDK_OFFSET(0x19304B70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x19303A20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A4A7A3F49AFEE9C7_OFFSET UNITYSDK_OFFSET(0x19304B50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A5F5C3921DFE273C_OFFSET UNITYSDK_OFFSET(0x192FE6E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x193009E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_AC6F177A8F01C62C_OFFSET UNITYSDK_OFFSET(0x19305610)
#define SYSTEM_RUNTIMETYPE_METHOD_4_AF3DE7EEF4AB88EF_OFFSET UNITYSDK_OFFSET(0x19301E70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_AFF0288E5C2FA945_OFFSET UNITYSDK_OFFSET(0x19305290)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B33A5903750BC7C9_OFFSET UNITYSDK_OFFSET(0x19306050)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B51AE11045F7B3BA_OFFSET UNITYSDK_OFFSET(0x19303CF0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B6FA5966DD9F791D_OFFSET UNITYSDK_OFFSET(0x19300690)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B7E20B95BC406686_OFFSET UNITYSDK_OFFSET(0x193004B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B8D4EAB1D455C7F4_OFFSET UNITYSDK_OFFSET(0x192FE5D0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B9EEFB7B2B203E99_OFFSET UNITYSDK_OFFSET(0x193067A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BA7DDEA5D04AAB37_OFFSET UNITYSDK_OFFSET(0x192FDA00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BAD677EDADF830ED_OFFSET UNITYSDK_OFFSET(0x192FAE40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BB0A59B9F336A543_OFFSET UNITYSDK_OFFSET(0x192FCC50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BC18648869EC0F4E_OFFSET UNITYSDK_OFFSET(0x19303F90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x19303770)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BE8FDB1F94273CB8_OFFSET UNITYSDK_OFFSET(0x193066E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x19301F30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C56EC437BF452B8A_OFFSET UNITYSDK_OFFSET(0x19302240)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C654CC0A0A1E6D84_OFFSET UNITYSDK_OFFSET(0x192FC100)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C658F01C8EFFDB98_OFFSET UNITYSDK_OFFSET(0x19303C00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C68820B46A75C60F_OFFSET UNITYSDK_OFFSET(0x19300440)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x19306830)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19303D80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C9B320AD2104D332_OFFSET UNITYSDK_OFFSET(0x19306740)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CD0DA533CF672E80_OFFSET UNITYSDK_OFFSET(0x192FD0D0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19300A80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CF5DC7861D31A31E_OFFSET UNITYSDK_OFFSET(0x19301F90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x19302040)
#define SYSTEM_RUNTIMETYPE_METHOD_4_D52BB76CD6D88650_OFFSET UNITYSDK_OFFSET(0x192FB0C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_D7BDE1DB13959115_OFFSET UNITYSDK_OFFSET(0x192FC630)
#define SYSTEM_RUNTIMETYPE_METHOD_4_D858AF0F46CCD98E_OFFSET UNITYSDK_OFFSET(0x19300550)
#define SYSTEM_RUNTIMETYPE_METHOD_4_D9511D994445744A_OFFSET UNITYSDK_OFFSET(0x192FB220)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DC5EDEC1A4CAE943_OFFSET UNITYSDK_OFFSET(0x19300480)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DCBFE7CF049964B1_OFFSET UNITYSDK_OFFSET(0x19306190)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DD9817232466412F_OFFSET UNITYSDK_OFFSET(0x19300C30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DDC06E7C0E268BEB_OFFSET UNITYSDK_OFFSET(0x19301780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E3F9BFF18734C0C0_OFFSET UNITYSDK_OFFSET(0x193068F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E45766266B416658_OFFSET UNITYSDK_OFFSET(0x192FABB0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E52B97AF68D3AA93_OFFSET UNITYSDK_OFFSET(0x19305E70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E5ADD21B4712DC9B_OFFSET UNITYSDK_OFFSET(0x192FD330)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E6E0E17B91A0BCEC_OFFSET UNITYSDK_OFFSET(0x19300970)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E861F1F679411CDE_OFFSET UNITYSDK_OFFSET(0x192FAC50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19300AC0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x19300AE0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x19300AF0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x19300C60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x193068E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19300A70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F01AAD2DB4958D64_OFFSET UNITYSDK_OFFSET(0x193037F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x19300940)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19301E30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x19306840)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F3AE841AC01EBAAE_OFFSET UNITYSDK_OFFSET(0x19306030)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FBAD77336E2456ED_OFFSET UNITYSDK_OFFSET(0x192FA9C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FC0BB9B98F157BA5_OFFSET UNITYSDK_OFFSET(0x193020E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FE197C2E59FB1FB0_OFFSET UNITYSDK_OFFSET(0x192FB500)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FE498859A08EB64C_OFFSET UNITYSDK_OFFSET(0x19300C50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FF54CDB5BDDE8CC9_OFFSET UNITYSDK_OFFSET(0x19301990)

namespace System
{
	inline static constexpr unsigned int RuntimeType_TypeDefinitionIndex = 309;

	class RuntimeType : public ::System::Reflection::TypeInfo
	{
	public:
		static ::System::RuntimeType** StaticGet_Field_4_0()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::System::RuntimeType** StaticGet_Field_4_3()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::System::RuntimeType** StaticGet_Field_4_2()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x570);
		}
		static ::System::RuntimeType** StaticGet_Field_4_1()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x578);
		}
		static ::System::RuntimeType** StaticGet_Field_4_5()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::System::RuntimeType** StaticGet_Field_4_4()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x588);
		}
		::System::MonoTypeInfo* Field_4_6; // 0x18
		::System::Object* Field_4_7; // 0x20
		::System::Reflection::RuntimeConstructorInfo* Field_4_8; // 0x28

		::System::Void Method_4_FE197C2E59FB1FB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FE197C2E59FB1FB0_OFFSET))(this);
		}

		static ::System::Void Method_4_E3F9BFF18734C0C0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E3F9BFF18734C0C0_OFFSET))();
		}

		static ::System::Void Method_4_8E8E14DAC76FD795(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8E8E14DAC76FD795_OFFSET))(type);
		}

		static ::System::Void Method_4_FBAD77336E2456ED(::Il2CppArray<::System::RuntimeType*>* genericArguments, ::Il2CppArray<::System::RuntimeType*>* genericParamters)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::RuntimeType*>*, ::Il2CppArray<::System::RuntimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FBAD77336E2456ED_OFFSET))(genericArguments, genericParamters);
		}

		static ::System::Void Method_4_E45766266B416658(::System::String* fullname, ::System::String*& name, ::System::String*& ns)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E45766266B416658_OFFSET))(fullname, name, ns);
		}

		static ::System::Void Method_4_E861F1F679411CDE(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean allowPrefixLookup, ::System::Boolean& prefixLookup, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E861F1F679411CDE_OFFSET))(bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
		}

		static ::System::Void Method_4_2381A80250E5EB20(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2381A80250E5EB20_OFFSET))(bindingFlags, name, ignoreCase, listType);
		}

		static ::System::Boolean Method_4_BAD677EDADF830ED(::System::Reflection::MemberInfo* memberInfo, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BAD677EDADF830ED_OFFSET))(memberInfo, name, ignoreCase);
		}

		static ::System::Boolean Method_4_990705E1285E5D7E(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, ::System::Boolean isPublic, ::System::Boolean isNonProtectedInternal, ::System::Boolean isStatic, ::System::String* name, ::System::Boolean prefixLookup)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_990705E1285E5D7E_OFFSET))(memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
		}

		static ::System::Boolean Method_4_D52BB76CD6D88650(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::System::String* name, ::System::Boolean prefixLookup, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_D52BB76CD6D88650_OFFSET))(type, bindingFlags, name, prefixLookup, ns);
		}

		static ::System::Boolean Method_4_D9511D994445744A(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_D9511D994445744A_OFFSET))(method, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean Method_4_643D25EB51727889(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_643D25EB51727889_OFFSET))(constructor, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean Method_4_0B95BBA0C641425A(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0B95BBA0C641425A_OFFSET))(methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
		}

		::System::Boolean Method_4_3845AD389B8E1E47()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3845AD389B8E1E47_OFFSET))(this);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> Method_4_9DD818AECA498807(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9DD818AECA498807_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> Method_4_C654CC0A0A1E6D84(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C654CC0A0A1E6D84_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> Method_4_4008CCD07F07FB16(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4008CCD07F07FB16_OFFSET))(this, name, bindingAttr, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> Method_4_CD0DA533CF672E80(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CD0DA533CF672E80_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> Method_4_8430DE1649B0E144(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8430DE1649B0E144_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Type*> Method_4_37FEDDCB949F4EEC(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Type*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_37FEDDCB949F4EEC_OFFSET))(this, fullname, bindingAttr, allowPrefixLookup);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_4_B8D4EAB1D455C7F4(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B8D4EAB1D455C7F4_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* Method_4_3A0A3239997E45A2(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3A0A3239997E45A2_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_4_6EF7E865134D13A9(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6EF7E865134D13A9_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* Method_4_A5F5C3921DFE273C(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A5F5C3921DFE273C_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* Method_4_8E8968EE5607D47F(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8E8968EE5607D47F_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Type*>* Method_4_5980B3E99AC3DEF5(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5980B3E99AC3DEF5_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_4_95E37F1410C9DE8F(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_95E37F1410C9DE8F_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::MethodInfo* Method_4_56416F3130FC7F17(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_56416F3130FC7F17_OFFSET))(this, name, bindingAttr, binder, callConv, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_4_0B3E7709264544D7(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0B3E7709264544D7_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_4_509C16745FEC5D38(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_509C16745FEC5D38_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::EventInfo* Method_4_68346D56932A893F(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_68346D56932A893F_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::FieldInfo* Method_4_52D83F92395E4FF4(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_52D83F92395E4FF4_OFFSET))(this, name, bindingAttr);
		}

		::System::Type* Method_4_1B3FE7116CFD1F68(::System::String* fullname, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1B3FE7116CFD1F68_OFFSET))(this, fullname, ignoreCase);
		}

		::System::Type* Method_4_6211F78CB1276418(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6211F78CB1276418_OFFSET))(this, fullname, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_4_A2497175640B6EA8(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A2497175640B6EA8_OFFSET))(this, name, type, bindingAttr);
		}

		::System::Reflection::Module* Method_4_C68820B46A75C60F()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C68820B46A75C60F_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_9D9B4B9508B30842()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9D9B4B9508B30842_OFFSET))(this);
		}

		::System::Reflection::Assembly* Method_4_DC5EDEC1A4CAE943()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DC5EDEC1A4CAE943_OFFSET))(this);
		}

		::System::Reflection::RuntimeAssembly* Method_4_B7E20B95BC406686()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B7E20B95BC406686_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_4_645B1D3C84FF0E0E()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_4_645B1D3C84FF0E0E_1()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_1_OFFSET))(this);
		}

		::System::Boolean Method_4_6ACCDE9BF52FCC3E(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6ACCDE9BF52FCC3E_OFFSET))(this, o);
		}

		::System::Boolean Method_4_D858AF0F46CCD98E(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_D858AF0F46CCD98E_OFFSET))(this, type);
		}

		::System::Boolean Method_4_B6FA5966DD9F791D(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B6FA5966DD9F791D_OFFSET))(this, typeInfo);
		}

		::System::Boolean Method_4_8E4C7EE3D9864FC7(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8E4C7EE3D9864FC7_OFFSET))(this, c);
		}

		::System::Boolean Method_4_5D09C4A124F9D549(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5D09C4A124F9D549_OFFSET))(this, other);
		}

		::System::Type* Method_4_801D806FFB84DEB1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_801D806FFB84DEB1_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_2E6C4B90624A96FA()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2E6C4B90624A96FA_OFFSET))(this);
		}

		::System::Type* Method_4_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A99467CE9479C990_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes Method_4_98C7EF1109EAC80E()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_98C7EF1109EAC80E_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_4_CE34EA208837238D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CE34EA208837238D_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Boolean Method_4_25669C2F5FCF3304()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_25669C2F5FCF3304_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes Method_4_E6E0E17B91A0BCEC()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E6E0E17B91A0BCEC_OFFSET))(this);
		}

		::System::Boolean Method_4_FE498859A08EB64C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FE498859A08EB64C_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_4_OFFSET))(this);
		}

		::System::Int32 Method_4_18BA888AB214BADA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_18BA888AB214BADA_OFFSET))(this);
		}

		::System::Type* Method_4_8943C0FE993200B9()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8943C0FE993200B9_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_4_1AD9A7FE82660E8B()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1AD9A7FE82660E8B_OFFSET))(this);
		}

		::System::Array* Method_4_6A55E2EC0B972AAB()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6A55E2EC0B972AAB_OFFSET))(this);
		}

		::System::Type* Method_4_631F7AFB57B3049C()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_631F7AFB57B3049C_OFFSET))(this);
		}

		::System::Boolean Method_4_9BDC695756CA7615(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9BDC695756CA7615_OFFSET))(this, value);
		}

		::System::String* Method_4_DDC06E7C0E268BEB(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DDC06E7C0E268BEB_OFFSET))(this, value);
		}

		::Il2CppArray<::System::RuntimeType*>* Method_4_9869262B801A8B94()
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9869262B801A8B94_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_4_3975AE8266EC191B()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3975AE8266EC191B_OFFSET))(this);
		}

		::System::Type* Method_4_FF54CDB5BDDE8CC9(::Il2CppArray<::System::Type*>* instantiation)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FF54CDB5BDDE8CC9_OFFSET))(this, instantiation);
		}

		::System::Boolean Method_4_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_OFFSET))(this);
		}

		::System::Boolean Method_4_F0E307B84478A272_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_1_OFFSET))(this);
		}

		::System::Int32 Method_4_AF3DE7EEF4AB88EF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_AF3DE7EEF4AB88EF_OFFSET))(this);
		}

		::System::Type* Method_4_CF5DC7861D31A31E()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CF5DC7861D31A31E_OFFSET))(this);
		}

		::System::Boolean Method_4_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CF8BA38996D09531_OFFSET))(this);
		}

		::System::Boolean Method_4_42C5BADE1C9EFC80()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_42C5BADE1C9EFC80_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_4_FC0BB9B98F157BA5()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FC0BB9B98F157BA5_OFFSET))(this);
		}

		::System::Object* Method_4_C56EC437BF452B8A(::System::String* name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* providedArgs, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::String*>* namedParams)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C56EC437BF452B8A_OFFSET))(this, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
		}

		::System::Boolean Method_4_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_083577508CCFDAF3_OFFSET))(this, obj);
		}

		static ::System::Boolean Method_4_97FEFCB730B533A1(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_OFFSET))(left, right);
		}

		static ::System::Boolean Method_4_97FEFCB730B533A1_1(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_1_OFFSET))(left, right);
		}

		::System::Object* Method_4_BC62B9FB87FD6A48()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BC62B9FB87FD6A48_OFFSET))(this);
		}

		::System::Void Method_4_8AFFA6FB25A13B67(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8AFFA6FB25A13B67_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Object*>* Method_4_F01AAD2DB4958D64(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F01AAD2DB4958D64_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_49C1B4B9219A5DC1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_49C1B4B9219A5DC1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_4_8ED7634FF4DC23E1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8ED7634FF4DC23E1_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_4_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A3C117624446E448_OFFSET))(this);
		}

		::System::String* Method_4_5C33F0F1C4BA96FD(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5C33F0F1C4BA96FD_OFFSET))(this, serialization);
		}

		::System::Reflection::MemberTypes Method_4_B51AE11045F7B3BA()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B51AE11045F7B3BA_OFFSET))(this);
		}

		::System::Type* Method_4_7F66C4648B09BAAB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_OFFSET))(this);
		}

		::System::Int32 Method_4_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Void Method_4_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Object* Method_4_7014EAF47262682A(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::Object*>* activationAttributes, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7014EAF47262682A_OFFSET))(this, bindingAttr, binder, args, culture, activationAttributes, stackMark);
		}

		::System::Object* Method_4_1155B2A0E7763DA5(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1155B2A0E7763DA5_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Reflection::MonoCMethod* Method_4_0B822C3378BBB549()
		{
			return ((::System::Reflection::MonoCMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0B822C3378BBB549_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_A4A7A3F49AFEE9C7(::System::Reflection::MethodInfo* generic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A4A7A3F49AFEE9C7_OFFSET))(this, generic);
		}

		::System::Reflection::ConstructorInfo* Method_4_7999019A63725FEC(::System::Reflection::ConstructorInfo* generic)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7999019A63725FEC_OFFSET))(this, generic);
		}

		::System::Reflection::MethodInfo* Method_4_A3896E84665005EF(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A3896E84665005EF_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* Method_4_A0B2C8B62794E4BE(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A0B2C8B62794E4BE_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* Method_4_8D149B6F29738C40(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8D149B6F29738C40_OFFSET))(this, fromNoninstanciated);
		}

		::System::String* Method_4_49091FA7D0FEFC35()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_49091FA7D0FEFC35_OFFSET))(this);
		}

		::System::Reflection::RuntimeConstructorInfo* Method_4_9C30238B90F0DF72()
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9C30238B90F0DF72_OFFSET))(this);
		}

		::System::Object* Method_4_56963593147B7C4E(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_56963593147B7C4E_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Object* Method_4_968CB3656A8D61F8(::System::Boolean nonPublic)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_968CB3656A8D61F8_OFFSET))(this, nonPublic);
		}

		::System::Object* Method_4_AFF0288E5C2FA945(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_AFF0288E5C2FA945_OFFSET))(this, value, binder, culture, invokeAttr);
		}

		::System::Object* Method_4_525FF34EB81A284C(::System::Object* value, ::System::Boolean& failed)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_525FF34EB81A284C_OFFSET))(this, value, failed);
		}

		static ::System::Object* Method_4_AC6F177A8F01C62C(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_AC6F177A8F01C62C_OFFSET))(value, targetType);
		}

		::System::String* Method_4_C658F01C8EFFDB98(::System::TypeNameKind kind)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeNameKind))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C658F01C8EFFDB98_OFFSET))(this, kind);
		}

		::System::Type* Method_4_0DE48B629D359F8A(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0DE48B629D359F8A_OFFSET))(this, rank);
		}

		::System::Type* Method_4_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_4_E52B97AF68D3AA93(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E52B97AF68D3AA93_OFFSET))(this, rank);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::System::Type* Method_4_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4FB5F56430673EA6_1_OFFSET))(this);
		}

		static ::System::Type* Method_4_7A23B97866F2B18C(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7A23B97866F2B18C_OFFSET))(type);
		}

		::System::Type* Method_4_4FB5F56430673EA6_2()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4FB5F56430673EA6_2_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* Method_4_F3AE841AC01EBAAE()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F3AE841AC01EBAAE_OFFSET))(this);
		}

		::System::Boolean Method_4_BC18648869EC0F4E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BC18648869EC0F4E_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_4_6ACCE05522A55B89()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6ACCE05522A55B89_OFFSET))(this);
		}

		static ::System::Object* Method_4_B33A5903750BC7C9(::System::Type* genericType, ::System::RuntimeType* genericArgument)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B33A5903750BC7C9_OFFSET))(genericType, genericArgument);
		}

		static ::System::Type* Method_4_1C0B3B154EF753FD(::System::Type* gt, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1C0B3B154EF753FD_OFFSET))(gt, types);
		}

		::System::IntPtr Method_4_5612F26DCB691197(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5612F26DCB691197_OFFSET))(this, namePtr, bindingAttr, ignoreCase);
		}

		::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>* Method_4_A0C3C07C9CC06B0B(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A0C3C07C9CC06B0B_OFFSET))(this, name, bindingAttr, ignoreCase, reflectedType);
		}

		::System::IntPtr Method_4_DCBFE7CF049964B1(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DCBFE7CF049964B1_OFFSET))(this, name, bindingAttr, icase);
		}

		::System::IntPtr Method_4_772ABBEDF7F0E0E1(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_772ABBEDF7F0E0E1_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>* Method_4_D7BDE1DB13959115(::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_D7BDE1DB13959115_OFFSET))(this, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>* Method_4_BB0A59B9F336A543(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BB0A59B9F336A543_OFFSET))(this, name, bindingAttr, icase, reflectedType);
		}

		::System::Reflection::InterfaceMapping Method_4_8B324C1EA3243DDF(::System::Type* ifaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8B324C1EA3243DDF_OFFSET))(this, ifaceType);
		}

		static ::System::Void Method_4_3D7064D5675597EA(::System::Type* t, ::System::Type* iface, ::Il2CppArray<::System::Reflection::MethodInfo*>*& targets, ::Il2CppArray<::System::Reflection::MethodInfo*>*& methods)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::MethodInfo*>*&, ::Il2CppArray<::System::Reflection::MethodInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3D7064D5675597EA_OFFSET))(t, iface, targets, methods);
		}

		::System::Guid Method_4_6676BF79100271CF()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6676BF79100271CF_OFFSET))(this);
		}

		::System::Void Method_4_4ACE462D3A32946C(::System::Int32& packing, ::System::Int32& size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4ACE462D3A32946C_OFFSET))(this, packing, size);
		}

		static ::System::Type* Method_4_2419027A1B6A289C(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2419027A1B6A289C_OFFSET))(clsid, server, throwOnError);
		}

		::System::TypeCode Method_4_060A11F80A43F597()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_060A11F80A43F597_OFFSET))(this);
		}

		static ::System::TypeCode Method_4_BE8FDB1F94273CB8(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BE8FDB1F94273CB8_OFFSET))(type);
		}

		static ::System::Type* Method_4_52A6E8F5E2C154FA(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_52A6E8F5E2C154FA_OFFSET))(progID, server, throwOnError);
		}

		::System::String* Method_4_55AA8DDCDD4BB83A()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_OFFSET))(this);
		}

		static ::System::Object* Method_4_073DD9BB0734A6ED(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_073DD9BB0734A6ED_OFFSET))(type);
		}

		::System::Reflection::MethodBase* Method_4_36DCEB2D7FEF7FC8()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_36DCEB2D7FEF7FC8_OFFSET))(this);
		}

		::System::String* Method_4_C9B320AD2104D332(::System::Boolean full_name, ::System::Boolean assembly_qualified)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C9B320AD2104D332_OFFSET))(this, full_name, assembly_qualified);
		}

		::Il2CppArray<::System::Type*>* Method_4_2178613F97FA6C87(::System::Boolean runtimeArray)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2178613F97FA6C87_OFFSET))(this, runtimeArray);
		}

		::System::Reflection::GenericParameterAttributes Method_4_DD9817232466412F()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DD9817232466412F_OFFSET))(this);
		}

		::System::Int32 Method_4_BFBBE8A6FE167A6A()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BFBBE8A6FE167A6A_OFFSET))(this);
		}

		::System::IntPtr Method_4_1CE4D117678600CC(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_OFFSET))(this, name, bindingAttr);
		}

		::System::IntPtr Method_4_1CE4D117678600CC_1(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_1_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>* Method_4_BA7DDEA5D04AAB37(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BA7DDEA5D04AAB37_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimeEventInfo*>* Method_4_E5ADD21B4712DC9B(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeEventInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E5ADD21B4712DC9B_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Type*>* Method_4_2EF36975534D3ECF()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2EF36975534D3ECF_OFFSET))(this);
		}

		::System::IntPtr Method_4_299BBAE2E9EA23BB(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_299BBAE2E9EA23BB_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::RuntimeType*>* Method_4_5B25F8ADDC27882E(::System::String* displayName, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5B25F8ADDC27882E_OFFSET))(this, displayName, bindingAttr);
		}

		::System::String* Method_4_55AA8DDCDD4BB83A_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_1_OFFSET))(this);
		}

		::System::Type* Method_4_7F66C4648B09BAAB_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_1_OFFSET))(this);
		}

		::System::String* Method_4_247EE95BB171CB15()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_247EE95BB171CB15_OFFSET))(this);
		}

		::System::String* Method_4_B9EEFB7B2B203E99()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B9EEFB7B2B203E99_OFFSET))(this);
		}

		::System::Int32 Method_4_C74CF020AA42ED85_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_1_OFFSET))(this);
		}

		::System::String* Method_4_1798FAFF45053267()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1798FAFF45053267_OFFSET))(this);
		}

		::System::Boolean Method_4_F39234F2606D8D97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F39234F2606D8D97_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_5_OFFSET))(this);
		}
	};
}
