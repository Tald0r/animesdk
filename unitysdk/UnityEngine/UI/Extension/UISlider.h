#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"
#include "unitysdk/UnityEngine/UI/Slider.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Slider_SliderEvent; }

#define UNITYENGINE_UI_EXTENSION_UISLIDER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0xD614EF0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD614870)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GETRATIO_OFFSET UNITYSDK_OFFSET(0xD614CA0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GET_ISINT_OFFSET UNITYSDK_OFFSET(0xD614470)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GET_MAXVAL_OFFSET UNITYSDK_OFFSET(0xD614550)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GET_MINVAL_OFFSET UNITYSDK_OFFSET(0xD614640)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0xD614730)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xD6147A0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD614790)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD6155A0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD615510)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD615420)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_ONSLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xD6150D0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0xD615020)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0xD614F70)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SETINITVAL_OFFSET UNITYSDK_OFFSET(0xD6149C0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SETRATIO_OFFSET UNITYSDK_OFFSET(0xD614D30)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SETVAL_OFFSET UNITYSDK_OFFSET(0xD614DC0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SET_ISINT_OFFSET UNITYSDK_OFFSET(0xD614480)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SET_MAXVAL_OFFSET UNITYSDK_OFFSET(0xD614560)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SET_MINVAL_OFFSET UNITYSDK_OFFSET(0xD614650)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0xD614760)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_TRIGGERSOUND_OFFSET UNITYSDK_OFFSET(0xD615190)
#define UNITYENGINE_UI_EXTENSION_UISLIDER__AWAKE_B__24_0_OFFSET UNITYSDK_OFFSET(0xD6156D0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD615630)
#define UNITYENGINE_UI_EXTENSION_UISLIDER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD615710)
#define UNITYENGINE_UI_EXTENSION_UISLIDER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD615720)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UISlider_TypeDefinitionIndex = 73500;

	class UISlider : public ::UnityEngine::UI::Slider
	{
	public:
		::System::Int32 lastIntValue; // 0x178
		::System::Boolean saveMute; // 0x17C
		::System::Boolean isMute; // 0x17D
		::MoleMole::Config::ConfigSoundActionGeneral* soundAction; // 0x180
		::System::String* rtpcKey; // 0x188
		::Sirenix::Serialization::SerializationData serializationData; // 0x190
		::UnityEngine::UI::Slider_SliderEvent* valueChangedCallback; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GET_ISINT_OFFSET))(this);
		}

		::System::Void set_isInt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SET_ISINT_OFFSET))(this, value);
		}

		::System::Single get_maxVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GET_MAXVAL_OFFSET))(this);
		}

		::System::Void set_maxVal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SET_MAXVAL_OFFSET))(this, value);
		}

		::System::Single get_minVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GET_MINVAL_OFFSET))(this);
		}

		::System::Void set_minVal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SET_MINVAL_OFFSET))(this, value);
		}

		::Sirenix::Serialization::SerializationData get_SerializationData()
		{
			return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GET_SERIALIZATIONDATA_OFFSET))(this);
		}

		::System::Void set_SerializationData(::Sirenix::Serialization::SerializationData value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SET_SERIALIZATIONDATA_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void SetInitVal(::System::Single val, ::System::Single max, ::System::Single min, ::System::Boolean isInt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SETINITVAL_OFFSET))(this, val, max, min, isInt);
		}

		::System::Single GetRatio(::System::Single val)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_GETRATIO_OFFSET))(this, val);
		}

		::System::Void SetRatio(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SETRATIO_OFFSET))(this, ratio);
		}

		::System::Void SetVal(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_SETVAL_OFFSET))(this, val);
		}

		::System::Void AddListener(::UnityEngine::Events::UnityAction_1<::System::Single>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_ADDLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveListener(::UnityEngine::Events::UnityAction_1<::System::Single>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_REMOVELISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Void OnSliderValueChanged(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_ONSLIDERVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void TriggerSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_TRIGGERSOUND_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void _Awake_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER__AWAKE_B__24_0_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
