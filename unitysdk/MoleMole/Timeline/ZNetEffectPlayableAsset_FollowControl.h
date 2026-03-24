#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0EBF15FC645ED991.h"
#include "unitysdk/Enum_3_AA5E322261F64EE5.h"
#include "unitysdk/MoleMole/Timeline/ZNetEffectPlayableAsset_FollowControl_Struct_2_EB3E19A852D50FD1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config::EffectPattern { class MonoEffectPluginFollowSoData_New; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_BINDINGTRANS_OFFSET UNITYSDK_OFFSET(0xA556A60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHENDFRAME_OFFSET UNITYSDK_OFFSET(0xA557DB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHMAXENDFRAME_OFFSET UNITYSDK_OFFSET(0xA557A00)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_USEUNATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0xA557500)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_0C29AEF00864BB0B_OFFSET UNITYSDK_OFFSET(0xA5581A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA556F60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_7056754B8997189C_OFFSET UNITYSDK_OFFSET(0xA5572E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_86CB9470B3C23800_OFFSET UNITYSDK_OFFSET(0xA558220)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_9A90429BA583E7C4_OFFSET UNITYSDK_OFFSET(0xA557640)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA556EA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA5579A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_BINDINGTRANS_OFFSET UNITYSDK_OFFSET(0xA556FE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHENDFRAME_OFFSET UNITYSDK_OFFSET(0xA557F40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHMAXENDFRAME_OFFSET UNITYSDK_OFFSET(0xA557B90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_USEUNATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0xA5576B0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA558160)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_FollowControl_TypeDefinitionIndex = 49166;

	class ZNetEffectPlayableAsset_FollowControl : public ::System::Object
	{
	public:
		// static const ::System::String* UN_ATTACH_GROUP_NAME; // 0x0
		::System::Boolean _isDynamicBindPoint; // 0x10
		::System::Boolean followCamera; // 0x11
		::System::String* sceneFollowPath; // 0x18
		::System::String* logicBindPointName; // 0x20
		::System::String* bindingPath; // 0x28
		::Enum_3_0EBF15FC645ED991 Option; // 0x30
		::Enum_3_AA5E322261F64EE5 posOffsetRelativeOption; // 0x34
		::Enum_3_AA5E322261F64EE5 angleOffsetRelativeOption; // 0x38
		::System::Boolean OnlyFirstFrame; // 0x3C
		::UnityEngine::GameObject* m_stGoCtx; // 0x40
		::System::String* m_sFxPath; // 0x48
		::MoleMole::Timeline::ZNetEffectPlayableAsset* m_stZNetAsset; // 0x50
		::System::String* m_sAnimClipName; // 0x58
		::System::Boolean m_bIsNormalFx; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_bindingTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_BINDINGTRANS_OFFSET))(this);
		}

		::System::Void set_bindingTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_BINDINGTRANS_OFFSET))(this, a1);
		}

		::System::Boolean get_useUnAttachConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_USEUNATTACHCONFIG_OFFSET))(this);
		}

		::System::Void set_useUnAttachConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_USEUNATTACHCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_unAttachMaxEndFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHMAXENDFRAME_OFFSET))(this);
		}

		::System::Void set_unAttachMaxEndFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHMAXENDFRAME_OFFSET))(this, a1);
		}

		::System::Int32 get_unAttachEndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHENDFRAME_OFFSET))(this);
		}

		::System::Void set_unAttachEndFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHENDFRAME_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C29AEF00864BB0B(::UnityEngine::GameObject* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_0C29AEF00864BB0B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_1_86CB9470B3C23800()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_86CB9470B3C23800_OFFSET))(this);
		}

		::System::Void Method_1_7056754B8997189C(::UnityEngine::Transform* a1, ::System::String* a2, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl_Struct_2_EB3E19A852D50FD1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl_Struct_2_EB3E19A852D50FD1&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_7056754B8997189C_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New* Method_1_9A90429BA583E7C4(::System::Boolean a1)
		{
			return ((::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_9A90429BA583E7C4_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}
	};
}
