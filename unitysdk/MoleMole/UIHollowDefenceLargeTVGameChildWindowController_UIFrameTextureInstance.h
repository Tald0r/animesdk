#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_30D3D578039787FA;
class Class_2_A8F5ABF31E066ED4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE239B80)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSHCOROUTINE_OFFSET UNITYSDK_OFFSET(0xE239740)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSH_OFFSET UNITYSDK_OFFSET(0xE239530)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xE239800)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0xE239980)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xE239840)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xE239A10)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE2393B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDefenceLargeTVGameChildWindowController_UIFrameTextureInstance_TypeDefinitionIndex = 78700;

	class UIHollowDefenceLargeTVGameChildWindowController_UIFrameTextureInstance : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* _FlushImage; // 0x10
		::Class_1_30D3D578039787FA* TSPlayer; // 0x18
		::UnityEngine::Material* _material; // 0x20
		::Class_2_A8F5ABF31E066ED4* _image; // 0x28
		::UnityEngine::Color SavedColor; // 0x30
		::Foundation::Coroutine::CoroutineHandle _FlushHandle; // 0x40

		::System::Void _ctor(::Class_2_A8F5ABF31E066ED4* image, ::System::String* TextureKey)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE__CTOR_OFFSET))(this, image, TextureKey);
		}

		::System::Void Flush(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSH_OFFSET))(this, curve, time);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FlushCoroutine(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSHCOROUTINE_OFFSET))(this, curve, time);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_COLOR_OFFSET))(this, value);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_DISPOSE_OFFSET))(this);
		}
	};
}
