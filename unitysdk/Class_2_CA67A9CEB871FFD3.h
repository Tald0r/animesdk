#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A01CE0B13E11F09E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_30D3D578039787FA;
class Class_2_777A5D016ADC7368;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CA67A9CEB871FFD3_CLEAN_OFFSET UNITYSDK_OFFSET(0xB5960F0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x98A8D00)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xB5964C0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_1AB5A6469F8078A6_OFFSET UNITYSDK_OFFSET(0xB596F60)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0xB597380)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_22A23F80BC0C2437_OFFSET UNITYSDK_OFFSET(0xB596440)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB596D30)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_29233D60F5F7BAAB_OFFSET UNITYSDK_OFFSET(0x98A8880)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_2B653550E05B1799_OFFSET UNITYSDK_OFFSET(0x98A8920)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_4219D990677B003B_OFFSET UNITYSDK_OFFSET(0x98A89F0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB597510)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB596780)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0xB5965B0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_63A873D8342FF3FC_OFFSET UNITYSDK_OFFSET(0xB5968C0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_6D7CB3E6CB4A7728_OFFSET UNITYSDK_OFFSET(0xB595F70)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_1_OFFSET UNITYSDK_OFFSET(0xB5972C0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_OFFSET UNITYSDK_OFFSET(0xB596800)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x98A8910)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB596250)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_B2F4E13D35CCB8F9_OFFSET UNITYSDK_OFFSET(0xB596990)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_BEAC7AF5959E6BD7_OFFSET UNITYSDK_OFFSET(0xB596D60)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xB5968E0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_C7C8E8CA7C1063A4_1_OFFSET UNITYSDK_OFFSET(0xB597670)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0xB597070)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB596540)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x98A8B60)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x98A8DF0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E92D3295A6133F2B_OFFSET UNITYSDK_OFFSET(0x98A8BF0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E9C3CC7578F15AF1_OFFSET UNITYSDK_OFFSET(0x98A8890)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB596D40)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0xB596EF0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_FD8F035445811108_OFFSET UNITYSDK_OFFSET(0xB5972A0)
#define CLASS_2_CA67A9CEB871FFD3__CCTOR_OFFSET UNITYSDK_OFFSET(0xB596390)
#define CLASS_2_CA67A9CEB871FFD3__CTOR_OFFSET UNITYSDK_OFFSET(0xB596350)

inline static constexpr unsigned int Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex = 63704;

class Class_2_CA67A9CEB871FFD3 : public ::Class_1_A01CE0B13E11F09E
{
public:
	static ::Foundation::ObjectPool_1<::Class_2_CA67A9CEB871FFD3*>** StaticGet_Field_2_8()
	{
		return (::Foundation::ObjectPool_1<::Class_2_CA67A9CEB871FFD3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex)->GetStaticField(0x3E050);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex)->GetStaticField(0xF190);
	}
	::Class_2_777A5D016ADC7368* Field_2_1; // 0x20
	::Foundation::AssetPath Field_2_4; // 0x28
	::UnityEngine::Material* Field_2_9; // 0x38
	::UnityEngine::CanvasGroup* Field_2_3; // 0x40
	::Foundation::AssetRequestHandle Field_2_5; // 0x48
	::UnityEngine::Material* Field_2_10; // 0x68
	::UnityEngine::UI::RawImage* Field_2_2; // 0x70
	::Class_1_30D3D578039787FA* Field_2_6; // 0x78
	::UnityEngine::Material* Field_2_11; // 0x80
	::System::Boolean Field_2_13; // 0x88
	::System::Boolean Field_2_12; // 0x89
	::Foundation::Coroutine::CoroutineHandle Field_2_7; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3__CCTOR_OFFSET))();
	}

	::System::Void Method_2_6D7CB3E6CB4A7728(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_6D7CB3E6CB4A7728_OFFSET))(this, a1, a2);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_CLEAN_OFFSET))(this);
	}

	::System::Void Method_2_22A23F80BC0C2437(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_22A23F80BC0C2437_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_2_63A873D8342FF3FC()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_63A873D8342FF3FC_OFFSET))(this);
	}

	static ::Class_2_CA67A9CEB871FFD3* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_BEBC8F4773DC82AA_OFFSET))();
	}

	::System::Boolean Method_2_B2F4E13D35CCB8F9(::Foundation::AssetPath a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_B2F4E13D35CCB8F9_OFFSET))(this, a1, a2);
	}

	::Class_1_30D3D578039787FA* Method_2_24748FC20F375725()
	{
		return ((::Class_1_30D3D578039787FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_BEAC7AF5959E6BD7(::Class_2_777A5D016ADC7368* a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_BEAC7AF5959E6BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_1AB5A6469F8078A6(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_1AB5A6469F8078A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_2_FD8F035445811108()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_FD8F035445811108_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786_1(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_1B609003A2DB539A_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_C7C8E8CA7C1063A4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_C7C8E8CA7C1063A4_1_OFFSET))(this, a1);
	}

	::UnityEngine::UI::RawImage* Method_2_29233D60F5F7BAAB()
	{
		return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_29233D60F5F7BAAB_OFFSET))(this);
	}

	::System::Void Method_2_E9C3CC7578F15AF1(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E9C3CC7578F15AF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_30D3D578039787FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30D3D578039787FA*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2B653550E05B1799(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_2B653550E05B1799_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4219D990677B003B(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_4219D990677B003B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	static ::Class_2_CA67A9CEB871FFD3* Method_2_E92D3295A6133F2B(::Class_2_777A5D016ADC7368* a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)(::Class_2_777A5D016ADC7368*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E92D3295A6133F2B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8024D1B75A10789_OFFSET))(this);
	}
};
