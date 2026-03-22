#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Class_2_787A64751D1D3DEF_Enum_3_65794A143130A3C8.h"
#include "unitysdk/Class_2_787A64751D1D3DEF_Enum_3_9D264987D6887BD1.h"
#include "unitysdk/Enum_3_DB663931210BBC27_3.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_79526D80B8F6897C;
class Class_2_208CC9941471731A_148;
class Class_2_208CC9941471731A_364;
class Class_2_208CC9941471731A_689;
class Class_2_208CC9941471731A_6;
class Class_2_6913AEABC08EF711;
class Class_2_A8F5ABF31E066ED4;
class Class_3_4DE9364B75C28A4E;
class Class_3_8F63A57C1693E5AC;
class Class_3_8F63A57C1693E5AC_1;
class Class_3_AE02BC8285203464_30;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHadalZone_Common_RatingRowContext; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_B81AB3851AD916CA;

#define CLASS_2_787A64751D1D3DEF_METHOD_2_06FCB1509E644D25_OFFSET UNITYSDK_OFFSET(0x87475F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_088DB9BC4B2BC2CF_OFFSET UNITYSDK_OFFSET(0x8749580)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_08971C34FD4CBAAA_OFFSET UNITYSDK_OFFSET(0x874F860)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0A32ABCEA39CED97_OFFSET UNITYSDK_OFFSET(0x874F620)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_1_OFFSET UNITYSDK_OFFSET(0x874D9E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_OFFSET UNITYSDK_OFFSET(0x874AC50)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0F038B7F18CABFA4_OFFSET UNITYSDK_OFFSET(0x87476D0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_114781D79D91EA39_OFFSET UNITYSDK_OFFSET(0x874DE10)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x87497E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_1B5993698C4504FF_OFFSET UNITYSDK_OFFSET(0x874F090)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_24D44677E906F110_OFFSET UNITYSDK_OFFSET(0x8748440)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_1_OFFSET UNITYSDK_OFFSET(0x874FDB0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_2_OFFSET UNITYSDK_OFFSET(0x8750490)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_OFFSET UNITYSDK_OFFSET(0x8748CA0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x87455F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0x874AA60)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x8749EA0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_1_OFFSET UNITYSDK_OFFSET(0x8750990)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_OFFSET UNITYSDK_OFFSET(0x874EFA0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x874F5C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_39CDDDA78A99EB2A_OFFSET UNITYSDK_OFFSET(0x874BB20)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_414CEA97B0C3A8D6_OFFSET UNITYSDK_OFFSET(0x874F3F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_41755BD4857393C2_OFFSET UNITYSDK_OFFSET(0x8748790)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x874B080)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_465CE7764E57D661_OFFSET UNITYSDK_OFFSET(0x87481B0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_1_OFFSET UNITYSDK_OFFSET(0x874AED0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_OFFSET UNITYSDK_OFFSET(0x8748B00)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4C07A7C191589751_OFFSET UNITYSDK_OFFSET(0x874FA30)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_1_OFFSET UNITYSDK_OFFSET(0x874B070)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_OFFSET UNITYSDK_OFFSET(0x87489C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_54BD9B75F6888A4C_OFFSET UNITYSDK_OFFSET(0x8746450)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_578F6AC474B9B5C6_OFFSET UNITYSDK_OFFSET(0x87484B0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_5B81D4C788C5B0B8_OFFSET UNITYSDK_OFFSET(0x8747020)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_6C6764973A21A175_OFFSET UNITYSDK_OFFSET(0x874E350)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_718A7B0C5F22E48B_OFFSET UNITYSDK_OFFSET(0x874CE40)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x8745950)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_1_OFFSET UNITYSDK_OFFSET(0x874D2F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_OFFSET UNITYSDK_OFFSET(0x8746020)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_8219F6E7155E8482_OFFSET UNITYSDK_OFFSET(0x8746800)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_8C4BA6933662A20B_OFFSET UNITYSDK_OFFSET(0x874F8E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x874B210)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_9B06BEA621946036_OFFSET UNITYSDK_OFFSET(0x874A850)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_9E79885B9964A170_OFFSET UNITYSDK_OFFSET(0x8749190)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_A583248D0B8C6672_OFFSET UNITYSDK_OFFSET(0x874A6C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_AEBB6B9FF3174063_OFFSET UNITYSDK_OFFSET(0x874DE20)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_B01C9084C23C9EA2_OFFSET UNITYSDK_OFFSET(0x874A9D0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_B59C133FB4E953A3_OFFSET UNITYSDK_OFFSET(0x874ED20)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_B5CC4B765EDE80DB_OFFSET UNITYSDK_OFFSET(0x874D720)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_C3565E25B3BA8E0E_OFFSET UNITYSDK_OFFSET(0x874AE50)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x874EC10)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8748730)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87483E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CF8E5A02EC282A9B_OFFSET UNITYSDK_OFFSET(0x874D030)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CFFA0A95DE270448_OFFSET UNITYSDK_OFFSET(0x87502C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x874F020)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D515D01DBAF10ECF_OFFSET UNITYSDK_OFFSET(0x8750A10)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D6D5C2F25B29E6BD_OFFSET UNITYSDK_OFFSET(0x874B320)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_DB63E118B6599003_OFFSET UNITYSDK_OFFSET(0x8749370)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_EF720643BE67B0E3_OFFSET UNITYSDK_OFFSET(0x874C9C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_F14CC5041C6DBBF6_OFFSET UNITYSDK_OFFSET(0x874D900)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x87489D0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_F5EB23CF2897B91B_OFFSET UNITYSDK_OFFSET(0x874DBE0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_FE3B237518DB128C_OFFSET UNITYSDK_OFFSET(0x87492F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_FEBBDD4B0DDEE735_OFFSET UNITYSDK_OFFSET(0x87465C0)
#define CLASS_2_787A64751D1D3DEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x8745FE0)
#define CLASS_2_787A64751D1D3DEF__CTOR_OFFSET UNITYSDK_OFFSET(0x8745CB0)

inline static constexpr unsigned int Class_2_787A64751D1D3DEF_TypeDefinitionIndex = 70702;

class Class_2_787A64751D1D3DEF : public ::Class_1_8A3658A741325FC2
{
public:
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_787A64751D1D3DEF_TypeDefinitionIndex)->GetStaticField(0x3B480);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6913AEABC08EF711*>*>* Field_2_15; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_9; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6913AEABC08EF711*>*>* Field_2_16; // 0x38
	::Class_2_208CC9941471731A_689* Field_2_2; // 0x40
	::System::Threading::CancellationToken Field_2_4; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_10; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6913AEABC08EF711*>* Field_2_17; // 0x58
	::System::Collections::Generic::List_1<::Class_3_8F63A57C1693E5AC_1*>* Field_2_13; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_14; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x70
	::System::Collections::Generic::List_1<::Class_3_4DE9364B75C28A4E*>* Field_2_12; // 0x78
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_148*>* Field_2_1; // 0x80
	::System::Boolean Field_2_6; // 0x88
	::System::Boolean Field_2_5; // 0x89
	::System::Boolean Field_2_3; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF__CCTOR_OFFSET))();
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_74FFCDA8E45BC6AC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_54BD9B75F6888A4C()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_54BD9B75F6888A4C_OFFSET))(this);
	}

	::System::Void Method_2_8219F6E7155E8482(::System::Int32 a1, ::System::Func_2<::System::Int32, ::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Func_2<::System::Int32, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_8219F6E7155E8482_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5B81D4C788C5B0B8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_5B81D4C788C5B0B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F038B7F18CABFA4(::Class_1_79526D80B8F6897C* a1, ::System::Int32 a2, ::System::Func_2<::System::Int32, ::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::Func_2<::System::Int32, ::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0F038B7F18CABFA4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_465CE7764E57D661()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_465CE7764E57D661_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_24D44677E906F110(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_24D44677E906F110_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_578F6AC474B9B5C6()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_578F6AC474B9B5C6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_41755BD4857393C2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_41755BD4857393C2_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_3_8F63A57C1693E5AC_1*>* Method_2_4F912580154405BB()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_3_8F63A57C1693E5AC_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_OFFSET))(this);
	}

	::System::Boolean Method_2_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_F39234F2606D8D97_OFFSET))(this);
	}

	::Class_2_6913AEABC08EF711* Method_2_4721D078C82DB787(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_6913AEABC08EF711*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25C0BB32EF98DD1D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_9E79885B9964A170(::Class_2_208CC9941471731A_148* a1, ::Class_2_208CC9941471731A_148* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_148*, ::Class_2_208CC9941471731A_148*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_9E79885B9964A170_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_6*>* Method_2_DB63E118B6599003()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_DB63E118B6599003_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_364*>* Method_2_088DB9BC4B2BC2CF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_364*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_088DB9BC4B2BC2CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Boolean Method_2_A583248D0B8C6672(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_A583248D0B8C6672_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FE3B237518DB128C(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_FE3B237518DB128C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3129BDB20712C068(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_3129BDB20712C068_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0E37EDA63E251A06(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_OFFSET))(this, a1);
	}

	::Class_2_6913AEABC08EF711* Method_2_4721D078C82DB787_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_6913AEABC08EF711*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* Method_2_4F912580154405BB_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_1_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_D6D5C2F25B29E6BD(::Class_3_8F63A57C1693E5AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8F63A57C1693E5AC*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D6D5C2F25B29E6BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_39CDDDA78A99EB2A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_39CDDDA78A99EB2A_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_EF720643BE67B0E3()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_EF720643BE67B0E3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_148*>* Method_2_718A7B0C5F22E48B()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_148*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_718A7B0C5F22E48B_OFFSET))(this);
	}

	::System::Void Method_2_CF8E5A02EC282A9B(::Class_3_AE02BC8285203464_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_30*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CF8E5A02EC282A9B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_74FFCDA8E45BC6AC_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_B5CC4B765EDE80DB(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_B5CC4B765EDE80DB_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F14CC5041C6DBBF6(::MoleMole::UIBaseController* a1, ::Class_2_A8F5ABF31E066ED4* a2)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseController*, ::Class_2_A8F5ABF31E066ED4*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_F14CC5041C6DBBF6_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0E37EDA63E251A06_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5EB23CF2897B91B(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_148*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_148*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_F5EB23CF2897B91B_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_2_114781D79D91EA39()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_114781D79D91EA39_OFFSET))(this);
	}

	::System::Void Method_2_AEBB6B9FF3174063(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_AEBB6B9FF3174063_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_FEBBDD4B0DDEE735()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_FEBBDD4B0DDEE735_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIHadalZone_Common_RatingRowContext*>* Method_2_6C6764973A21A175(::System::Int32 a1, ::Class_2_787A64751D1D3DEF_Enum_3_65794A143130A3C8 a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIHadalZone_Common_RatingRowContext*>*(*)(::PVOID, ::System::Int32, ::Class_2_787A64751D1D3DEF_Enum_3_65794A143130A3C8))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_6C6764973A21A175_OFFSET))(this, a1, a2);
	}

	::Class_2_6913AEABC08EF711* Method_2_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_6913AEABC08EF711*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B59C133FB4E953A3(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_B59C133FB4E953A3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C3565E25B3BA8E0E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_C3565E25B3BA8E0E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_351423CB72A37212(::Class_2_208CC9941471731A_364* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_364*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B5993698C4504FF(::System::UInt32 a1, ::Class_1_B81AB3851AD916CA<::Class_3_4DE9364B75C28A4E*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_B81AB3851AD916CA<::Class_3_4DE9364B75C28A4E*>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_1B5993698C4504FF_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_6*>* Method_2_414CEA97B0C3A8D6(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_6*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_414CEA97B0C3A8D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_06FCB1509E644D25(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_06FCB1509E644D25_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9B06BEA621946036(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_9B06BEA621946036_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_0A32ABCEA39CED97(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0A32ABCEA39CED97_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_2_08971C34FD4CBAAA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_08971C34FD4CBAAA_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_8C4BA6933662A20B()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_8C4BA6933662A20B_OFFSET))(this);
	}

	::System::Boolean Method_2_B01C9084C23C9EA2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_B01C9084C23C9EA2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_4C07A7C191589751(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4C07A7C191589751_OFFSET))(this, a1);
	}

	::System::Void Method_2_25C0BB32EF98DD1D_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFFA0A95DE270448(::Enum_3_DB663931210BBC27_3 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_3, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CFFA0A95DE270448_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_25C0BB32EF98DD1D_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_351423CB72A37212_1(::Class_2_208CC9941471731A_364* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_364*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D515D01DBAF10ECF(::Class_2_787A64751D1D3DEF_Enum_3_9D264987D6887BD1 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_787A64751D1D3DEF_Enum_3_9D264987D6887BD1, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D515D01DBAF10ECF_OFFSET))(this, a1, a2, a3, a4);
	}
};
