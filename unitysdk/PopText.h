#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/TextItalicAdobeStyle.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class VertexHelper; }

#define POPTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0xF4B5EC0)
#define POPTEXT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF4B5B20)
#define POPTEXT_GET_TIMERINTERVAL_OFFSET UNITYSDK_OFFSET(0xF4B5B00)
#define POPTEXT_ONFINISH_OFFSET UNITYSDK_OFFSET(0xF4B5E00)
#define POPTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xF4B61B0)
#define POPTEXT_REPLAY_OFFSET UNITYSDK_OFFSET(0xF4B6B80)
#define POPTEXT_RESOLVESPEED_OFFSET UNITYSDK_OFFSET(0xF4B5CE0)
#define POPTEXT_SETFINISH_OFFSET UNITYSDK_OFFSET(0xF4B5D90)
#define POPTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0xF4B5B30)
#define POPTEXT_SETTIMER_OFFSET UNITYSDK_OFFSET(0xF4B5BD0)
#define POPTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0xF4B5FC0)
#define POPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF4B6BE0)
#define POPTEXT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xF4B6CE0)
#define POPTEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xF4B6CF0)

inline static constexpr unsigned int PopText_TypeDefinitionIndex = 39003;

class PopText : public ::UnityEngine::UI::TextItalicAdobeStyle
{
public:
	::System::Boolean PlayAwake; // 0x2F0
	::System::Single Speed; // 0x2F4
	::System::Collections::Generic::List_1<::System::Single>* timer; // 0x2F8
	::System::Action* finishAction; // 0x300
	::System::Boolean finish; // 0x308
	::UnityEngine::AnimationCurve* Curve; // 0x310
	::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* listUIVertex; // 0x318
	::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* newUIVertex; // 0x320

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT__CTOR_OFFSET))(this);
	}

	::System::Single get_TimerInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_GET_TIMERINTERVAL_OFFSET))(this);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void SetText(::System::String* str, ::System::String* realText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + POPTEXT_SETTEXT_OFFSET))(this, str, realText);
	}

	::System::Void ResolveSpeed(::System::Single wordPerSecond, ::System::Int32 wordCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + POPTEXT_RESOLVESPEED_OFFSET))(this, wordPerSecond, wordCount);
	}

	::System::Void SetFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_SETFINISH_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_AWAKE_OFFSET))(this);
	}

	::System::Void SetTimer(::System::Int32 strLen)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POPTEXT_SETTIMER_OFFSET))(this, strLen);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UPDATE_OFFSET))(this);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_ONFINISH_OFFSET))(this);
	}

	::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPTEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
	}

	::System::Void Replay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_REPLAY_OFFSET))(this);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT___BASE_AWAKE_OFFSET))(this);
	}

	::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPTEXT___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
	}
};
