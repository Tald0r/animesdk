#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_F50B5EAC0B6702FB;
class Class_1_F5B35B1B6669CF16;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigPlayChessBGQuadFade; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_247D01E9659250AE_METHOD_5_19ED8136218C5C0B_OFFSET UNITYSDK_OFFSET(0xA866FC0)
#define CLASS_5_247D01E9659250AE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA8671D0)
#define CLASS_5_247D01E9659250AE_METHOD_5_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xA866BC0)
#define CLASS_5_247D01E9659250AE_METHOD_5_B430F3DD5F896C88_OFFSET UNITYSDK_OFFSET(0xA867080)
#define CLASS_5_247D01E9659250AE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA867170)
#define CLASS_5_247D01E9659250AE_METHOD_5_DFBA3759E53DCE38_OFFSET UNITYSDK_OFFSET(0xA866B30)
#define CLASS_5_247D01E9659250AE__CTOR_OFFSET UNITYSDK_OFFSET(0xA867110)

inline static constexpr unsigned int Class_5_247D01E9659250AE_TypeDefinitionIndex = 71786;

class Class_5_247D01E9659250AE : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayChessBGQuadFade*>
{
public:
	::Class_1_F5B35B1B6669CF16* Field_5_1; // 0x40
	::MoleMole::Config::ConfigPlayChessBGQuadFade* Field_5_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_DFBA3759E53DCE38(::MoleMole::Config::ConfigPlayChessBGQuadFade* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayChessBGQuadFade*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_DFBA3759E53DCE38_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_5_B430F3DD5F896C88(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_B430F3DD5F896C88_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_19ED8136218C5C0B(::System::Boolean a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_19ED8136218C5C0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
	}
};
