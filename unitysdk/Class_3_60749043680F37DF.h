#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigUIActionSoundIntendingNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_60749043680F37DF_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xA5D2930)
#define CLASS_3_60749043680F37DF_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA5D2920)
#define CLASS_3_60749043680F37DF_METHOD_3_0C730BB8D3554DA4_OFFSET UNITYSDK_OFFSET(0xA5D2970)
#define CLASS_3_60749043680F37DF_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0xA5D2C20)
#define CLASS_3_60749043680F37DF_METHOD_3_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xA5D2A70)
#define CLASS_3_60749043680F37DF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA5D2BC0)
#define CLASS_3_60749043680F37DF__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D2BB0)

inline static constexpr unsigned int Class_3_60749043680F37DF_TypeDefinitionIndex = 71870;

class Class_3_60749043680F37DF : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::MoleMole::Config::ConfigUIActionSoundIntendingNode* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Method_3_0C730BB8D3554DA4(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF_METHOD_3_0C730BB8D3554DA4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF_METHOD_3_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_60749043680F37DF_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}
};
