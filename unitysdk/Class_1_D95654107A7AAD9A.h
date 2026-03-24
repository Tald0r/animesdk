#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4.h"
#include "unitysdk/Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686.h"
#include "unitysdk/Enum_3_46FE3E575CBDB25A.h"
#include "unitysdk/Enum_3_CBD75F282C7514DC.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Struct_2_12607DDCBFAB5CA5.h"
#include "unitysdk/Struct_2_5C435A4F9C3472F0.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/Struct_2_BBD1842F08605895.h"
#include "unitysdk/Struct_2_CA13CD3B8CC65E04.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2203E1F22CACEF25;
class Class_1_2203E1F22CACEF25_Class_2_17107A40C2E0CCFB;
class Class_1_2203E1F22CACEF25_Class_3_8D472738B6642145;
class Class_1_2203E1F22CACEF25_Class_3_F972A9FF1E378E1A;
class Class_1_59E69BDAEE19603F;
namespace MoleMole { class UITextTypesettingLanSettings; }
namespace MoleMole { class UITextTypesettingSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_D95654107A7AAD9A_METHOD_1_0995EE00000F39E2_OFFSET UNITYSDK_OFFSET(0x73690A0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_108C6156F892E42B_OFFSET UNITYSDK_OFFSET(0x7360E60)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_13F6D2503A99D773_OFFSET UNITYSDK_OFFSET(0x7360B00)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_17EE965C51143036_OFFSET UNITYSDK_OFFSET(0x7368200)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_18067EC4A2E597F7_OFFSET UNITYSDK_OFFSET(0x7363D30)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_1DD6D4B21FC93DFD_OFFSET UNITYSDK_OFFSET(0x7364CD0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_2DA5618D676B529F_OFFSET UNITYSDK_OFFSET(0x736A3B0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_371E49E1349C2874_OFFSET UNITYSDK_OFFSET(0x7369F80)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_3784CCF4940F49CA_OFFSET UNITYSDK_OFFSET(0x7367C00)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_3F18EA213655F983_OFFSET UNITYSDK_OFFSET(0x736A510)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_405480C2D15EE61E_OFFSET UNITYSDK_OFFSET(0x7367ED0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_41FF965979209C17_OFFSET UNITYSDK_OFFSET(0x7363AE0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_480A13FF7A354440_OFFSET UNITYSDK_OFFSET(0x736AD50)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_4D1DCD9FA6C7D489_OFFSET UNITYSDK_OFFSET(0x7369EB0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_5562AFD25AA16B43_OFFSET UNITYSDK_OFFSET(0x7368E30)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_5AFC5302F64D6072_OFFSET UNITYSDK_OFFSET(0x7365CF0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_6B46CE3E519CE762_OFFSET UNITYSDK_OFFSET(0x7360D80)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_6CB77797FC1DA2FA_OFFSET UNITYSDK_OFFSET(0x7369910)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_6D9B598E8749155D_OFFSET UNITYSDK_OFFSET(0x735FCB0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_7EB7E0BDFD6B4D8C_OFFSET UNITYSDK_OFFSET(0x735FA20)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_7F85536F1737837F_OFFSET UNITYSDK_OFFSET(0x73656E0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_82E6482510403803_OFFSET UNITYSDK_OFFSET(0x7360180)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_83ED83A0363CA7B3_OFFSET UNITYSDK_OFFSET(0x7368950)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_8408DA5E8AFF78F5_OFFSET UNITYSDK_OFFSET(0x7369CD0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_8B3F124BA97F7D5D_OFFSET UNITYSDK_OFFSET(0x73685A0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_928BBFB811061BB2_OFFSET UNITYSDK_OFFSET(0x7368AB0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_933C1C2B808F5185_OFFSET UNITYSDK_OFFSET(0x735FD60)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_93B15E9D5BDC024C_OFFSET UNITYSDK_OFFSET(0x7360DF0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_94C7464140186199_OFFSET UNITYSDK_OFFSET(0x7365600)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_9FA277C0637C3F42_OFFSET UNITYSDK_OFFSET(0x7367570)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_A569155B33C35EEB_OFFSET UNITYSDK_OFFSET(0x736B450)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_AA7575E1873C7AA3_OFFSET UNITYSDK_OFFSET(0x7364D50)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_AC13F97A112611CB_OFFSET UNITYSDK_OFFSET(0x736AF10)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_B1D27D80F40F2222_OFFSET UNITYSDK_OFFSET(0x736A780)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_B53BA15E32BFDFBB_OFFSET UNITYSDK_OFFSET(0x7363E40)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_BD8B98684AEE189D_OFFSET UNITYSDK_OFFSET(0x7364890)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_BDB09CE5A8F54D1A_OFFSET UNITYSDK_OFFSET(0x7360F30)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_C6ED824FDF6358CA_OFFSET UNITYSDK_OFFSET(0x7369190)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_CA52D82ECA84B05D_OFFSET UNITYSDK_OFFSET(0x7365E50)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_CB9EC93157ACD6B8_OFFSET UNITYSDK_OFFSET(0x736A1D0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_D8357D6B0DAAB612_OFFSET UNITYSDK_OFFSET(0x7368220)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_DFB056F86E34214F_OFFSET UNITYSDK_OFFSET(0x736B9E0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_E2EB01931E376E4C_OFFSET UNITYSDK_OFFSET(0x736ABA0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_EE3189A14ACF1134_OFFSET UNITYSDK_OFFSET(0x735FDF0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_EF0BB585011EF696_OFFSET UNITYSDK_OFFSET(0x7368680)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_F0229EF7C99C0EE9_OFFSET UNITYSDK_OFFSET(0x7367CD0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_F1405C47F1E11FE6_OFFSET UNITYSDK_OFFSET(0x7368500)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_F589ABC88803E110_OFFSET UNITYSDK_OFFSET(0x7363CB0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_F763835E11BB015A_OFFSET UNITYSDK_OFFSET(0x73642B0)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_F8CB14CBE5B9ADDB_OFFSET UNITYSDK_OFFSET(0x7368890)
#define CLASS_1_D95654107A7AAD9A_METHOD_1_FFED5998EC4DD5F9_OFFSET UNITYSDK_OFFSET(0x736B5E0)
#define CLASS_1_D95654107A7AAD9A__CCTOR_OFFSET UNITYSDK_OFFSET(0x735EEA0)

inline static constexpr unsigned int Class_1_D95654107A7AAD9A_TypeDefinitionIndex = 49014;

class Class_1_D95654107A7AAD9A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32D70);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32D78);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4>>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32D80);
	}
	static ::MoleMole::UITextTypesettingLanSettings** StaticGet_Field_1_5()
	{
		return (::MoleMole::UITextTypesettingLanSettings**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32D88);
	}
	static ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32D90);
	}
	static ::Class_1_2203E1F22CACEF25** StaticGet_Field_1_7()
	{
		return (::Class_1_2203E1F22CACEF25**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32D98);
	}
	static ::System::Collections::Generic::List_1<::Class_1_59E69BDAEE19603F*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::List_1<::Class_1_59E69BDAEE19603F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DA0);
	}
	static ::Class_1_2203E1F22CACEF25_Class_3_F972A9FF1E378E1A** StaticGet_Field_1_18()
	{
		return (::Class_1_2203E1F22CACEF25_Class_3_F972A9FF1E378E1A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DA8);
	}
	static ::System::Text::StringBuilder** StaticGet_Field_1_0()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DB0);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::Enum_3_CBD75F282C7514DC>>** StaticGet_Field_1_21()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::Enum_3_CBD75F282C7514DC>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Char>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DC0);
	}
	static ::System::String** StaticGet_Field_1_12()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DC8);
	}
	static ::System::Collections::Generic::Stack_1<::Enum_3_CBD75F282C7514DC>** StaticGet_Field_1_20()
	{
		return (::System::Collections::Generic::Stack_1<::Enum_3_CBD75F282C7514DC>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DD0);
	}
	static ::Class_1_2203E1F22CACEF25_Class_3_8D472738B6642145** StaticGet_Field_1_19()
	{
		return (::Class_1_2203E1F22CACEF25_Class_3_8D472738B6642145**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DD8);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DE0);
	}
	static ::System::Collections::Generic::List_1<::System::Char>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DE8);
	}
	static ::UnityEngine::TextGenerator** StaticGet_Field_1_6()
	{
		return (::UnityEngine::TextGenerator**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0x32DF0);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0xC9F0);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0xC9F4);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D95654107A7AAD9A_TypeDefinitionIndex)->GetStaticField(0xC9F5);
	}
	// static const ::System::Int32 Field_1_1 = 0xFFFF; // 0x0
	// static const ::System::Char Field_1_2; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_6D9B598E8749155D(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_6D9B598E8749155D_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_933C1C2B808F5185(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::Enum_3_CBD75F282C7514DC>>* a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::Enum_3_CBD75F282C7514DC>>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_933C1C2B808F5185_OFFSET))(a1, a2);
	}

	static ::Class_1_59E69BDAEE19603F* Method_1_EE3189A14ACF1134(::MoleMole::LanguageType a1)
	{
		return ((::Class_1_59E69BDAEE19603F*(*)(::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_EE3189A14ACF1134_OFFSET))(a1);
	}

	static ::Enum_3_46FE3E575CBDB25A Method_1_13F6D2503A99D773(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Enum_3_46FE3E575CBDB25A(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_13F6D2503A99D773_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_93B15E9D5BDC024C(::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_93B15E9D5BDC024C_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_108C6156F892E42B(::System::UInt64 a1)
	{
		return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_108C6156F892E42B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BDB09CE5A8F54D1A(::MoleMole::LanguageType a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::Vector2 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a5, ::Struct_2_CA13CD3B8CC65E04& a6, ::UnityEngine::TextGenerationSettings& a7, ::Struct_2_5C435A4F9C3472F0& a8)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageType, ::UnityEngine::UI::Text*, ::UnityEngine::Vector2, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::Struct_2_CA13CD3B8CC65E04&, ::UnityEngine::TextGenerationSettings&, ::Struct_2_5C435A4F9C3472F0&))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_BDB09CE5A8F54D1A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_1DD6D4B21FC93DFD(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_1DD6D4B21FC93DFD_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA7575E1873C7AA3(::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::Enum_3_CBD75F282C7514DC>>* a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::Enum_3_CBD75F282C7514DC>>*, ::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_AA7575E1873C7AA3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_94C7464140186199(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_94C7464140186199_OFFSET))(a1, a2);
	}

	static ::Struct_2_5C435A4F9C3472F0 Method_1_7F85536F1737837F(::MoleMole::LanguageType a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::Vector2 a3, ::System::String* a4, ::Struct_2_CA13CD3B8CC65E04& a5, ::System::Boolean a6)
	{
		return ((::Struct_2_5C435A4F9C3472F0(*)(::MoleMole::LanguageType, ::UnityEngine::UI::Text*, ::UnityEngine::Vector2, ::System::String*, ::Struct_2_CA13CD3B8CC65E04&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_7F85536F1737837F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_3784CCF4940F49CA(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_3784CCF4940F49CA_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_F0229EF7C99C0EE9(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_F0229EF7C99C0EE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_405480C2D15EE61E(::Class_1_2203E1F22CACEF25* a1, ::System::String* a2, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5> a3, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::Class_1_2203E1F22CACEF25*, ::System::String*, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5>, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_405480C2D15EE61E_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_F589ABC88803E110(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_F589ABC88803E110_OFFSET))(a1, a2);
	}

	static ::Struct_2_5C435A4F9C3472F0 Method_1_9FA277C0637C3F42(::MoleMole::LanguageType a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::Vector2 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a5, ::Struct_2_CA13CD3B8CC65E04& a6, ::System::Boolean a7)
	{
		return ((::Struct_2_5C435A4F9C3472F0(*)(::MoleMole::LanguageType, ::UnityEngine::UI::Text*, ::UnityEngine::Vector2, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::Struct_2_CA13CD3B8CC65E04&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_9FA277C0637C3F42_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_D8357D6B0DAAB612(::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_D8357D6B0DAAB612_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F1405C47F1E11FE6(::System::Single a1, ::System::Char a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_F1405C47F1E11FE6_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::String*, ::Struct_2_BBD1842F08605895> Method_1_8B3F124BA97F7D5D(::System::String* a1, ::System::String* a2, ::Struct_2_BBD1842F08605895& a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::Struct_2_BBD1842F08605895>(*)(::System::String*, ::System::String*, ::Struct_2_BBD1842F08605895&))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_8B3F124BA97F7D5D_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_EF0BB585011EF696(::MoleMole::LanguageType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::MoleMole::LanguageType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_EF0BB585011EF696_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F8CB14CBE5B9ADDB(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_F8CB14CBE5B9ADDB_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4>>* Method_1_83ED83A0363CA7B3()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4>>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_83ED83A0363CA7B3_OFFSET))();
	}

	static ::System::Void Method_1_F763835E11BB015A(::System::String* a1, ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* a2, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_F763835E11BB015A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_17EE965C51143036(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_17EE965C51143036_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_928BBFB811061BB2(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4>>* a2, ::System::Int32 a3)
	{
		return ((::System::String*(*)(::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::Class_1_D95654107A7AAD9A_Struct_2_6A8005D0FDE749A4>>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_928BBFB811061BB2_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_5562AFD25AA16B43(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_5562AFD25AA16B43_OFFSET))(a1);
	}

	static ::System::Single Method_1_BD8B98684AEE189D(::System::String* a1, ::UnityEngine::TextGenerationSettings a2)
	{
		return ((::System::Single(*)(::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_BD8B98684AEE189D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6B46CE3E519CE762(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_6B46CE3E519CE762_OFFSET))(a1);
	}

	static ::System::Void Method_1_5AFC5302F64D6072(::MoleMole::LanguageType a1, ::System::String* a2, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5> a3, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::MoleMole::LanguageType, ::System::String*, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5>, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_5AFC5302F64D6072_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_0995EE00000F39E2(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_0995EE00000F39E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_18067EC4A2E597F7(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_18067EC4A2E597F7_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B53BA15E32BFDFBB(::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* a1, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_B53BA15E32BFDFBB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_CA52D82ECA84B05D(::MoleMole::LanguageType a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a3, ::Struct_2_CA13CD3B8CC65E04& a4)
	{
		return ((::System::Void(*)(::MoleMole::LanguageType, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::Struct_2_CA13CD3B8CC65E04&))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_CA52D82ECA84B05D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_4D1DCD9FA6C7D489(::Enum_3_46FE3E575CBDB25A a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a4)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::Enum_3_46FE3E575CBDB25A, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_4D1DCD9FA6C7D489_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_2203E1F22CACEF25_Class_2_17107A40C2E0CCFB* Method_1_7EB7E0BDFD6B4D8C(::Class_1_2203E1F22CACEF25_Class_2_17107A40C2E0CCFB* a1)
	{
		return ((::Class_1_2203E1F22CACEF25_Class_2_17107A40C2E0CCFB*(*)(::Class_1_2203E1F22CACEF25_Class_2_17107A40C2E0CCFB*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_7EB7E0BDFD6B4D8C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CB9EC93157ACD6B8(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_CB9EC93157ACD6B8_OFFSET))(a1);
	}

	static ::Struct_2_5C435A4F9C3472F0 Method_1_2DA5618D676B529F(::MoleMole::LanguageType a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::Vector2 a3, ::System::String* a4, ::Struct_2_BBD1842F08605895 a5)
	{
		return ((::Struct_2_5C435A4F9C3472F0(*)(::MoleMole::LanguageType, ::UnityEngine::UI::Text*, ::UnityEngine::Vector2, ::System::String*, ::Struct_2_BBD1842F08605895))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_2DA5618D676B529F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_3F18EA213655F983(::MoleMole::LanguageType a1, ::System::String* a2, ::System::Boolean& a3)
	{
		return ((::System::String*(*)(::MoleMole::LanguageType, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_3F18EA213655F983_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_B1D27D80F40F2222(::System::Int32 a1, ::System::Single a2, ::UnityEngine::TextGenerator* a3)
	{
		return ((::System::Single(*)(::System::Int32, ::System::Single, ::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_B1D27D80F40F2222_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E2EB01931E376E4C(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_E2EB01931E376E4C_OFFSET))(a1, a2, a3);
	}

	static ::System::Char Method_1_8408DA5E8AFF78F5(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Char a5)
	{
		return ((::System::Char(*)(::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Int32, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_8408DA5E8AFF78F5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_59E69BDAEE19603F* Method_1_41FF965979209C17(::MoleMole::LanguageType a1)
	{
		return ((::Class_1_59E69BDAEE19603F*(*)(::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_41FF965979209C17_OFFSET))(a1);
	}

	static ::System::Void Method_1_AC13F97A112611CB(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_AC13F97A112611CB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_6CB77797FC1DA2FA(::MoleMole::LanguageType a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a3)
	{
		return ((::System::Void(*)(::MoleMole::LanguageType, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_6CB77797FC1DA2FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C6ED824FDF6358CA(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_C6ED824FDF6358CA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Collections::Generic::List_1<::Class_1_59E69BDAEE19603F*>* Method_1_480A13FF7A354440(::MoleMole::LanguageType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_59E69BDAEE19603F*>*(*)(::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_480A13FF7A354440_OFFSET))(a1);
	}

	static ::Class_1_59E69BDAEE19603F* Method_1_82E6482510403803(::MoleMole::UITextTypesettingSettings* a1, ::MoleMole::UITextTypesettingSettings* a2)
	{
		return ((::Class_1_59E69BDAEE19603F*(*)(::MoleMole::UITextTypesettingSettings*, ::MoleMole::UITextTypesettingSettings*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_82E6482510403803_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_371E49E1349C2874(::Enum_3_46FE3E575CBDB25A a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>* a5)
	{
		return ((::System::Int32(*)(::Enum_3_46FE3E575CBDB25A, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_D95654107A7AAD9A_Struct_2_880D5594E4C6B686>*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_371E49E1349C2874_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_A569155B33C35EEB(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_A569155B33C35EEB_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_FFED5998EC4DD5F9(::UnityEngine::UI::Text* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::UI::Text*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_FFED5998EC4DD5F9_OFFSET))(a1, a2, a3);
	}

	static ::System::Char Method_1_DFB056F86E34214F(::System::Char a1)
	{
		return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_METHOD_1_DFB056F86E34214F_OFFSET))(a1);
	}
};
