#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_IVIDEOPLAYER_ADD_ONERROR_OFFSET UNITYSDK_OFFSET(0x67A5380)
#define MOLEMOLE_IVIDEOPLAYER_ADD_ONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x67A52C0)
#define MOLEMOLE_IVIDEOPLAYER_ADD_ONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x67A5140)
#define MOLEMOLE_IVIDEOPLAYER_ADD_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x67A5200)
#define MOLEMOLE_IVIDEOPLAYER_ADD_ONSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x67A5080)
#define MOLEMOLE_IVIDEOPLAYER_ADD_ONSETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x67A5440)
#define MOLEMOLE_IVIDEOPLAYER_CALLONERROR_OFFSET UNITYSDK_OFFSET(0x67A5B10)
#define MOLEMOLE_IVIDEOPLAYER_CALLONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x67A5A00)
#define MOLEMOLE_IVIDEOPLAYER_CALLONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x67A57E0)
#define MOLEMOLE_IVIDEOPLAYER_CALLONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x67A58F0)
#define MOLEMOLE_IVIDEOPLAYER_CALLONSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x67A56D0)
#define MOLEMOLE_IVIDEOPLAYER_CALLONSETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x67A5C30)
#define MOLEMOLE_IVIDEOPLAYER_CLEARALLEVENT_OFFSET UNITYSDK_OFFSET(0x67A5660)
#define MOLEMOLE_IVIDEOPLAYER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x67A5540)
#define MOLEMOLE_IVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x67A55B0)
#define MOLEMOLE_IVIDEOPLAYER_ONERRORCLEAR_OFFSET UNITYSDK_OFFSET(0x67A5F00)
#define MOLEMOLE_IVIDEOPLAYER_ONPLAYFINISHCLEAR_OFFSET UNITYSDK_OFFSET(0x67A5E90)
#define MOLEMOLE_IVIDEOPLAYER_ONPLAYSTARTCLEAR_OFFSET UNITYSDK_OFFSET(0x67A5DB0)
#define MOLEMOLE_IVIDEOPLAYER_ONPREPARECOMPLETEDCLEAR_OFFSET UNITYSDK_OFFSET(0x67A5E20)
#define MOLEMOLE_IVIDEOPLAYER_ONSEEKCOMPLETEDCLEAR_OFFSET UNITYSDK_OFFSET(0x67A5D40)
#define MOLEMOLE_IVIDEOPLAYER_ONSETRENDERTEXTURECLEAR_OFFSET UNITYSDK_OFFSET(0x67A5F70)
#define MOLEMOLE_IVIDEOPLAYER_REMOVE_ONERROR_OFFSET UNITYSDK_OFFSET(0x67A53E0)
#define MOLEMOLE_IVIDEOPLAYER_REMOVE_ONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x67A5320)
#define MOLEMOLE_IVIDEOPLAYER_REMOVE_ONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x67A51A0)
#define MOLEMOLE_IVIDEOPLAYER_REMOVE_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x67A5260)
#define MOLEMOLE_IVIDEOPLAYER_REMOVE_ONSEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x67A50E0)
#define MOLEMOLE_IVIDEOPLAYER_REMOVE_ONSETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x67A54C0)
#define MOLEMOLE_IVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x67A5FE0)

namespace MoleMole
{
	inline static constexpr unsigned int IVideoPlayer_TypeDefinitionIndex = 62485;

	class IVideoPlayer : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::IVideoPlayer*>* OnPlayFinish; // 0x10
		::System::Action_1<::MoleMole::IVideoPlayer*>* OnPlayStart; // 0x18
		::System::Action_1<::MoleMole::IVideoPlayer*>* OnPrepareCompleted; // 0x20
		::System::Action_1<::MoleMole::IVideoPlayer*>* OnSeekCompleted; // 0x28
		::MoleMole::VideoPlayerMono* playerMono; // 0x30
		::System::Action_1<::UnityEngine::Texture*>* OnSetRenderTexture; // 0x38
		::System::Action_2<::MoleMole::IVideoPlayer*, ::System::String*>* OnError; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void add_OnSeekCompleted(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ADD_ONSEEKCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_OnSeekCompleted(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_REMOVE_ONSEEKCOMPLETED_OFFSET))(this, value);
		}

		::System::Void add_OnPlayStart(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ADD_ONPLAYSTART_OFFSET))(this, value);
		}

		::System::Void remove_OnPlayStart(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_REMOVE_ONPLAYSTART_OFFSET))(this, value);
		}

		::System::Void add_OnPrepareCompleted(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ADD_ONPREPARECOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_OnPrepareCompleted(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_REMOVE_ONPREPARECOMPLETED_OFFSET))(this, value);
		}

		::System::Void add_OnPlayFinish(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ADD_ONPLAYFINISH_OFFSET))(this, value);
		}

		::System::Void remove_OnPlayFinish(::System::Action_1<::MoleMole::IVideoPlayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_REMOVE_ONPLAYFINISH_OFFSET))(this, value);
		}

		::System::Void add_OnError(::System::Action_2<::MoleMole::IVideoPlayer*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::IVideoPlayer*, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ADD_ONERROR_OFFSET))(this, value);
		}

		::System::Void remove_OnError(::System::Action_2<::MoleMole::IVideoPlayer*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::IVideoPlayer*, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_REMOVE_ONERROR_OFFSET))(this, value);
		}

		::System::Void add_OnSetRenderTexture(::System::Action_1<::UnityEngine::Texture*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ADD_ONSETRENDERTEXTURE_OFFSET))(this, value);
		}

		::System::Void remove_OnSetRenderTexture(::System::Action_1<::UnityEngine::Texture*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_REMOVE_ONSETRENDERTEXTURE_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CallOnSeekCompleted(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CALLONSEEKCOMPLETED_OFFSET))(this, obj);
		}

		::System::Void CallOnPlayStart(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CALLONPLAYSTART_OFFSET))(this, obj);
		}

		::System::Void CallOnPrepareCompleted(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CALLONPREPARECOMPLETED_OFFSET))(this, obj);
		}

		::System::Void CallOnPlayFinish(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CALLONPLAYFINISH_OFFSET))(this, obj);
		}

		::System::Void CallOnError(::MoleMole::IVideoPlayer* arg1, ::System::String* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CALLONERROR_OFFSET))(this, arg1, arg2);
		}

		::System::Void CallOnSetRenderTexture(::UnityEngine::Texture* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CALLONSETRENDERTEXTURE_OFFSET))(this, obj);
		}

		::System::Void ClearAllEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_CLEARALLEVENT_OFFSET))(this);
		}

		::System::Void OnSeekCompletedClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONSEEKCOMPLETEDCLEAR_OFFSET))(this);
		}

		::System::Void OnPlayStartClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONPLAYSTARTCLEAR_OFFSET))(this);
		}

		::System::Void OnPrepareCompletedClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONPREPARECOMPLETEDCLEAR_OFFSET))(this);
		}

		::System::Void OnPlayFinishClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONPLAYFINISHCLEAR_OFFSET))(this);
		}

		::System::Void OnErrorClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONERRORCLEAR_OFFSET))(this);
		}

		::System::Void OnSetRenderTextureClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IVIDEOPLAYER_ONSETRENDERTEXTURECLEAR_OFFSET))(this);
		}
	};
}
