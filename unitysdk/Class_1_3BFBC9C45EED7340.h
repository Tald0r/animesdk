#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BuddyCollider;
class Class_1_2CB185F86C732591;
class Class_1_945ACFB1FEBC7A2C_1;
class Class_1_A59025D696FD25CD;
class Class_2_208CC9941471731A_348;
namespace MoleMole { class UIBuddyDIYComponentWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3BFBC9C45EED7340_METHOD_1_00D13835C93434FD_OFFSET UNITYSDK_OFFSET(0x7F72780)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_018D6E18107F76A0_OFFSET UNITYSDK_OFFSET(0x7F74440)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x7F759A0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_0478B32235735BFE_OFFSET UNITYSDK_OFFSET(0x7F76C60)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_04F1528B6D083891_OFFSET UNITYSDK_OFFSET(0x7F75E50)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_0A15B9DE4A367CA4_OFFSET UNITYSDK_OFFSET(0x7F76EE0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_101950726F8C57B5_OFFSET UNITYSDK_OFFSET(0x7F74160)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_143005669CBBEB09_1_OFFSET UNITYSDK_OFFSET(0x7F76580)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_143005669CBBEB09_OFFSET UNITYSDK_OFFSET(0x7F75D60)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_1F01745FCE507115_OFFSET UNITYSDK_OFFSET(0x7F75EE0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_24A0772048A301C1_OFFSET UNITYSDK_OFFSET(0x7F74310)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_3FBFF4AA9AE2C521_OFFSET UNITYSDK_OFFSET(0x7F75F40)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x7F778B0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_4AFD69EDFADF38E0_OFFSET UNITYSDK_OFFSET(0x7F77DF0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_4C2D8F7FDB543B6A_OFFSET UNITYSDK_OFFSET(0x7F74EF0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_4C7C98EBC53B7741_OFFSET UNITYSDK_OFFSET(0x7F77550)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_5A9EBA0114E7EA5A_OFFSET UNITYSDK_OFFSET(0x7F748D0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_643FFA1166071130_OFFSET UNITYSDK_OFFSET(0x7F76670)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_6E793510D10B5A80_OFFSET UNITYSDK_OFFSET(0x7F747B0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_6EE8D6AB8E629D5C_OFFSET UNITYSDK_OFFSET(0x7F77C80)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_704CAEDCD95E9E98_OFFSET UNITYSDK_OFFSET(0x7F77790)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_747DFE7D6C47CDBE_OFFSET UNITYSDK_OFFSET(0x7F75680)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_76D287B304B2A633_OFFSET UNITYSDK_OFFSET(0x7F75160)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_8A7B5568426DEBC0_OFFSET UNITYSDK_OFFSET(0x7F77400)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_8B4869A724C8F5C6_OFFSET UNITYSDK_OFFSET(0x7F734F0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_953D2CD0B3E2948C_OFFSET UNITYSDK_OFFSET(0x7F746A0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x7F76B90)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_98BCD64ECCE6E99D_OFFSET UNITYSDK_OFFSET(0x7F77950)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_9C2A65574448D201_OFFSET UNITYSDK_OFFSET(0x7F767C0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_BB4EDE0E0C478397_OFFSET UNITYSDK_OFFSET(0x7F73B30)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x7F76DE0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_C4E914B667DFF4B7_OFFSET UNITYSDK_OFFSET(0x7F757B0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_C62B5ABFAF6671E6_OFFSET UNITYSDK_OFFSET(0x7F721C0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_C87DF6037F284FF6_OFFSET UNITYSDK_OFFSET(0x7F761E0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_CB84F723B566C3F0_OFFSET UNITYSDK_OFFSET(0x7F752B0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x7F74E50)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_D7A7F3405536B009_OFFSET UNITYSDK_OFFSET(0x7F73200)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_D99C470BF16DEA6E_OFFSET UNITYSDK_OFFSET(0x7F72820)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_DEABF45BA8221542_OFFSET UNITYSDK_OFFSET(0x7F74000)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_E5DD0AE394898247_OFFSET UNITYSDK_OFFSET(0x7F72700)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_ED96F93CBFE2592E_OFFSET UNITYSDK_OFFSET(0x7F72A70)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_F28136982D1084AB_OFFSET UNITYSDK_OFFSET(0x7F739C0)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_F71995332F57AE0F_OFFSET UNITYSDK_OFFSET(0x7F75100)
#define CLASS_1_3BFBC9C45EED7340_METHOD_1_FA5892FBC9D6223A_OFFSET UNITYSDK_OFFSET(0x7F77B00)
#define CLASS_1_3BFBC9C45EED7340__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F720C0)

inline static constexpr unsigned int Class_1_3BFBC9C45EED7340_TypeDefinitionIndex = 37809;

class Class_1_3BFBC9C45EED7340 : public ::System::Object
{
public:
	static ::UnityEngine::GameObject** StaticGet_Field_1_5()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348B0);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348B8);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_2()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348C0);
	}
	static ::MoleMole::UIBuddyDIYComponentWidgetController** StaticGet_Field_1_10()
	{
		return (::MoleMole::UIBuddyDIYComponentWidgetController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348C8);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_28()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348D0);
	}
	static ::UnityEngine::MeshCollider** StaticGet_Field_1_17()
	{
		return (::UnityEngine::MeshCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348D8);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348E0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_3()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348E8);
	}
	static ::UnityEngine::Canvas** StaticGet_Field_1_6()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348F0);
	}
	static ::Il2CppArray<::Class_1_2CB185F86C732591*>** StaticGet_Field_1_14()
	{
		return (::Il2CppArray<::Class_1_2CB185F86C732591*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x348F8);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_4()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0x34900);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_25()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDB0);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_26()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDB8);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_1_16()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDC0);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDD8);
	}
	static ::System::Boolean* StaticGet_Field_1_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDDC);
	}
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDDD);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDDE);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDDF);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_27()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDE0);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_19()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDE8);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDF0);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_24()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCDF8);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_8()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCE00);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCE08);
	}
	static ::System::Single* StaticGet_Field_1_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCE0C);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_1_15()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCE10);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_18()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCE28);
	}
	static ::System::Single* StaticGet_Field_1_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BFBC9C45EED7340_TypeDefinitionIndex)->GetStaticField(0xCE30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_C62B5ABFAF6671E6(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_C62B5ABFAF6671E6_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_348* Method_1_E5DD0AE394898247(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_348*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_E5DD0AE394898247_OFFSET))(a1);
	}

	static ::System::String* Method_1_00D13835C93434FD(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_00D13835C93434FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_D99C470BF16DEA6E(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_D99C470BF16DEA6E_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_D7A7F3405536B009(::UnityEngine::Transform* a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_D7A7F3405536B009_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_8B4869A724C8F5C6(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_8B4869A724C8F5C6_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_F28136982D1084AB()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_F28136982D1084AB_OFFSET))();
	}

	static ::System::String* Method_1_BB4EDE0E0C478397()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_BB4EDE0E0C478397_OFFSET))();
	}

	static ::Share::EPropertyType Method_1_DEABF45BA8221542(::Share::EPropertyType a1)
	{
		return ((::Share::EPropertyType(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_DEABF45BA8221542_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_101950726F8C57B5(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_101950726F8C57B5_OFFSET))(a1);
	}

	static ::System::Void Method_1_953D2CD0B3E2948C(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_953D2CD0B3E2948C_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_6E793510D10B5A80(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_6E793510D10B5A80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5A9EBA0114E7EA5A(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_5A9EBA0114E7EA5A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::Struct_2_143B7A497B890286 Method_1_018D6E18107F76A0(::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>* a1)
	{
		return ((::Struct_2_143B7A497B890286(*)(::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_018D6E18107F76A0_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_ED96F93CBFE2592E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_ED96F93CBFE2592E_OFFSET))(a1);
	}

	static ::System::Void Method_1_F71995332F57AE0F(::MoleMole::UIBuddyDIYComponentWidgetController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBuddyDIYComponentWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_F71995332F57AE0F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_76D287B304B2A633(::Struct_2_143B7A497B890286 a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_143B7A497B890286, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_76D287B304B2A633_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C2D8F7FDB543B6A(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_4C2D8F7FDB543B6A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CB84F723B566C3F0(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_CB84F723B566C3F0_OFFSET))(a1);
	}

	static ::Class_1_2CB185F86C732591* Method_1_24A0772048A301C1(::UnityEngine::Vector2 a1)
	{
		return ((::Class_1_2CB185F86C732591*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_24A0772048A301C1_OFFSET))(a1);
	}

	static ::Struct_2_143B7A497B890286 Method_1_747DFE7D6C47CDBE(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Struct_2_143B7A497B890286(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_747DFE7D6C47CDBE_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_C4E914B667DFF4B7(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_C4E914B667DFF4B7_OFFSET))(a1);
	}

	static ::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_025E4B1A2211CF52_OFFSET))();
	}

	static ::System::Int64 Method_1_143005669CBBEB09(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_143005669CBBEB09_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_04F1528B6D083891(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_04F1528B6D083891_OFFSET))(a1);
	}

	static ::MoleMole::UIBuddyDIYComponentWidgetController* Method_1_1F01745FCE507115()
	{
		return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_1F01745FCE507115_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_1*>* Method_1_3FBFF4AA9AE2C521(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_1*>*(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_3FBFF4AA9AE2C521_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_143005669CBBEB09_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_143005669CBBEB09_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_643FFA1166071130()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_643FFA1166071130_OFFSET))();
	}

	static ::System::Void Method_1_9C2A65574448D201()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_9C2A65574448D201_OFFSET))();
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_0478B32235735BFE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_0478B32235735BFE_OFFSET))(a1);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::String* Method_1_0A15B9DE4A367CA4(::System::Int32 a1, ::System::String* a2, ::System::Byte a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::System::Int32, ::System::String*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_0A15B9DE4A367CA4_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2 Method_1_8A7B5568426DEBC0(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_8A7B5568426DEBC0_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4C7C98EBC53B7741(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_4C7C98EBC53B7741_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_704CAEDCD95E9E98(::Struct_2_143B7A497B890286 a1, ::Struct_2_143B7A497B890286 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_143B7A497B890286, ::Struct_2_143B7A497B890286))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_704CAEDCD95E9E98_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::Class_1_A59025D696FD25CD* Method_1_98BCD64ECCE6E99D(::System::Int32 a1)
	{
		return ((::Class_1_A59025D696FD25CD*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_98BCD64ECCE6E99D_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_FA5892FBC9D6223A(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::UnityEngine::Vector2 a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_FA5892FBC9D6223A_OFFSET))(a1, a2, a3);
	}

	static ::BuddyCollider* Method_1_6EE8D6AB8E629D5C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::BuddyCollider*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_6EE8D6AB8E629D5C_OFFSET))(a1, a2);
	}

	static ::Class_1_945ACFB1FEBC7A2C_1* Method_1_C87DF6037F284FF6(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::Class_1_945ACFB1FEBC7A2C_1*(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_C87DF6037F284FF6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_4AFD69EDFADF38E0(::UnityEngine::Vector2 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3BFBC9C45EED7340_METHOD_1_4AFD69EDFADF38E0_OFFSET))(a1, a2);
	}
};
