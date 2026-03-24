#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A01CE0B13E11F09E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_30D3D578039787FA;
class Class_2_777A5D016ADC7368;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A8F5ABF31E066ED4_CLEAN_OFFSET UNITYSDK_OFFSET(0x8E78790)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x8E79510)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8E7A0B0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0x8E790E0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_22A23F80BC0C2437_OFFSET UNITYSDK_OFFSET(0x8E7B0C0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8E79BE0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8E79BF0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0x8E79790)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_3B715A5BDC8D2777_OFFSET UNITYSDK_OFFSET(0x8E5FDB0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_3DE76049F295E746_OFFSET UNITYSDK_OFFSET(0x8E78EF0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_3F9B81340AF3920D_OFFSET UNITYSDK_OFFSET(0x8E79820)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x8E788E0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_463E3811061BC127_OFFSET UNITYSDK_OFFSET(0x8E7AB70)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x8E79D30)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x8E7B140)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8E79270)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_51DA1CFE53F39BEE_OFFSET UNITYSDK_OFFSET(0x8E4CD90)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x8E79C50)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_6D7CB3E6CB4A7728_OFFSET UNITYSDK_OFFSET(0x8E78610)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_6DBFA13CB9E897E0_OFFSET UNITYSDK_OFFSET(0x8E79970)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_6DC94BBB0FD26711_OFFSET UNITYSDK_OFFSET(0x8E7A210)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_70EC476DADA4E786_OFFSET UNITYSDK_OFFSET(0x8E79600)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_89E373C22B290800_OFFSET UNITYSDK_OFFSET(0x8E4DF60)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x8E79810)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_9B0CDEC02D602F84_OFFSET UNITYSDK_OFFSET(0x8E78F20)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0x8E79C40)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x8E796C0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_A47F69FAF411C04C_OFFSET UNITYSDK_OFFSET(0x8E79A10)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_AE7FCE81F1E9DC9B_OFFSET UNITYSDK_OFFSET(0x8E7A560)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_B033190351BD9303_OFFSET UNITYSDK_OFFSET(0x8E78F40)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_B8A5492DD2AC8FB2_OFFSET UNITYSDK_OFFSET(0x8E78C90)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x8E7ACE0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_BEE06B825584C3E1_OFFSET UNITYSDK_OFFSET(0x8E78C00)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8E7AB00)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_D4B3608B292F0A4E_OFFSET UNITYSDK_OFFSET(0x8E79B20)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x8E79450)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_E74B74116B0416D7_OFFSET UNITYSDK_OFFSET(0x8E7AD90)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_E78871CB5AF125C0_OFFSET UNITYSDK_OFFSET(0x8E7A150)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x8E794E0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8E78F10)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8E7ACC0)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_F4F1E7D1CC26024A_1_OFFSET UNITYSDK_OFFSET(0x8E7B330)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x8E79E30)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x8E7AC50)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x8E7A130)
#define CLASS_2_A8F5ABF31E066ED4_METHOD_2_FD8F035445811108_OFFSET UNITYSDK_OFFSET(0x8E7B310)
#define CLASS_2_A8F5ABF31E066ED4__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E78B40)
#define CLASS_2_A8F5ABF31E066ED4__CTOR_OFFSET UNITYSDK_OFFSET(0x8E78B00)

inline static constexpr unsigned int Class_2_A8F5ABF31E066ED4_TypeDefinitionIndex = 70515;

class Class_2_A8F5ABF31E066ED4 : public ::Class_1_A01CE0B13E11F09E
{
public:
	static ::Foundation::ObjectPool_1<::Class_2_A8F5ABF31E066ED4*>** StaticGet_Field_2_8()
	{
		return (::Foundation::ObjectPool_1<::Class_2_A8F5ABF31E066ED4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8F5ABF31E066ED4_TypeDefinitionIndex)->GetStaticField(0x38720);
	}
	static ::System::Single* StaticGet_Field_2_18()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8F5ABF31E066ED4_TypeDefinitionIndex)->GetStaticField(0xDDF0);
	}
	static ::System::Single* StaticGet_Field_2_17()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8F5ABF31E066ED4_TypeDefinitionIndex)->GetStaticField(0xDDF4);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8F5ABF31E066ED4_TypeDefinitionIndex)->GetStaticField(0xDDF8);
	}
	::UnityEngine::CanvasGroup* Field_2_3; // 0x20
	::UnityEngine::Material* Field_2_13; // 0x28
	::UnityEngine::Material* Field_2_11; // 0x30
	::UnityEngine::Material* Field_2_14; // 0x38
	::Class_1_30D3D578039787FA* Field_2_6; // 0x40
	::Foundation::AssetPath Field_2_4; // 0x48
	::Class_2_777A5D016ADC7368* Field_2_1; // 0x58
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::Foundation::AssetRequestHandle Field_2_5; // 0x68
	::Foundation::AssetPath Field_2_10; // 0x88
	::UnityEngine::Material* Field_2_9; // 0x98
	::UnityEngine::Material* Field_2_12; // 0xA0
	::Foundation::Coroutine::CoroutineHandle Field_2_7; // 0xA8
	::System::Boolean Field_2_16; // 0xAC
	::System::Boolean Field_2_15; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_6D7CB3E6CB4A7728(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_6D7CB3E6CB4A7728_OFFSET))(this, a1, a2);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_CLEAN_OFFSET))(this);
	}

	::System::Void Method_2_BEE06B825584C3E1(::UnityEngine::Sprite* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_BEE06B825584C3E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B8A5492DD2AC8FB2(::Foundation::AssetPath a1, ::System::Action_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_B8A5492DD2AC8FB2_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_2_3DE76049F295E746()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_3DE76049F295E746_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Sprite* Method_2_9B0CDEC02D602F84()
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_9B0CDEC02D602F84_OFFSET))(this);
	}

	::System::Void Method_2_B033190351BD9303(::Class_2_777A5D016ADC7368* a1, ::UnityEngine::UI::Image* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_B033190351BD9303_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_1B609003A2DB539A_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_2_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_E8024D1B75A10789_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_70EC476DADA4E786_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_3B01BE9C2045A2D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_30D3D578039787FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30D3D578039787FA*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3F9B81340AF3920D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_3F9B81340AF3920D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A47F69FAF411C04C(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_A47F69FAF411C04C_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::UnityEngine::Sprite* Method_2_D4B3608B292F0A4E(::System::String* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_D4B3608B292F0A4E_OFFSET))(this, a1);
	}

	::Class_1_30D3D578039787FA* Method_2_24748FC20F375725()
	{
		return ((::Class_1_30D3D578039787FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_9CC926D36F34DBFF()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_9CC926D36F34DBFF_OFFSET))(this);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_2_E78871CB5AF125C0(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_E78871CB5AF125C0_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_A8F5ABF31E066ED4* Method_2_3B715A5BDC8D2777(::Class_2_777A5D016ADC7368* a1, ::UnityEngine::UI::Image* a2)
	{
		return ((::Class_2_A8F5ABF31E066ED4*(*)(::Class_2_777A5D016ADC7368*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_3B715A5BDC8D2777_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_89E373C22B290800(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_89E373C22B290800_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE7FCE81F1E9DC9B(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_AE7FCE81F1E9DC9B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_463E3811061BC127(::System::String* a1, ::System::Action_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_463E3811061BC127_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6DC94BBB0FD26711(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_6DC94BBB0FD26711_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Sprite* Method_2_51DA1CFE53F39BEE(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_51DA1CFE53F39BEE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	static ::Class_2_A8F5ABF31E066ED4* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_A8F5ABF31E066ED4*(*)())((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_BEBC8F4773DC82AA_OFFSET))();
	}

	::System::Boolean Method_2_E74B74116B0416D7(::Foundation::AssetPath a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_E74B74116B0416D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6DBFA13CB9E897E0(::Foundation::AssetPath a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_6DBFA13CB9E897E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_22A23F80BC0C2437(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_22A23F80BC0C2437_OFFSET))(this, a1);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_2_FD8F035445811108()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_FD8F035445811108_OFFSET))(this);
	}

	::System::Void Method_2_F4F1E7D1CC26024A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8F5ABF31E066ED4_METHOD_2_F4F1E7D1CC26024A_1_OFFSET))(this, a1);
	}
};
