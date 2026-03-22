#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_35DF41AA9C0B3123.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }
namespace UnityEngine { class AnimatorControllerParameter; }

#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKBOOL_OFFSET UNITYSDK_OFFSET(0x2F93E0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKFLOAT_OFFSET UNITYSDK_OFFSET(0x2F9220)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKINTEGER_OFFSET UNITYSDK_OFFSET(0x2F9300)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKTRIGGER_OFFSET UNITYSDK_OFFSET(0x2F94C0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECK_OFFSET UNITYSDK_OFFSET(0x2F9140)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETBOOL_OFFSET UNITYSDK_OFFSET(0x2F9490)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x2F92D0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x2F93B0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x2F9570)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_OFFSET UNITYSDK_OFFSET(0x2F9200)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2F9600)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2F95A0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x67CA770)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2F90C0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FPlayableGraphAnimatorControllerParam_TypeDefinitionIndex = 69853;

	struct alignas(8) FPlayableGraphAnimatorControllerParam
	{
		::System::Int32 _parameterHash; // 0x10
		::System::String* parameterName; // 0x18

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_SET_VALUE_OFFSET))(this, value);
		}

		::Enum_3_35DF41AA9C0B3123 Check(::UnityEngine::AnimatorControllerParameter* param, ::UnityEngine::AnimatorControllerParameterType paramType)
		{
			return ((::Enum_3_35DF41AA9C0B3123(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*, ::UnityEngine::AnimatorControllerParameterType))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECK_OFFSET))(this, param, paramType);
		}

		/*
		::UnityEngine::AnimatorControllerParameter* Get(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::UnityEngine::AnimatorControllerParameterType paramType)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::UnityEngine::AnimatorControllerParameterType))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_OFFSET))(this, playable, paramType);
		}
		*/

		::Enum_3_35DF41AA9C0B3123 CheckFloat(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::Enum_3_35DF41AA9C0B3123(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKFLOAT_OFFSET))(this, param);
		}

		/*
		::UnityEngine::AnimatorControllerParameter* GetFloat(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETFLOAT_OFFSET))(this, playable);
		}
		*/

		::Enum_3_35DF41AA9C0B3123 CheckInteger(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::Enum_3_35DF41AA9C0B3123(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKINTEGER_OFFSET))(this, param);
		}

		/*
		::UnityEngine::AnimatorControllerParameter* GetInteger(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETINTEGER_OFFSET))(this, playable);
		}
		*/

		::Enum_3_35DF41AA9C0B3123 CheckBool(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::Enum_3_35DF41AA9C0B3123(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKBOOL_OFFSET))(this, param);
		}

		/*
		::UnityEngine::AnimatorControllerParameter* GetBool(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETBOOL_OFFSET))(this, playable);
		}
		*/

		::Enum_3_35DF41AA9C0B3123 CheckTrigger(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::Enum_3_35DF41AA9C0B3123(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKTRIGGER_OFFSET))(this, param);
		}

		/*
		::UnityEngine::AnimatorControllerParameter* GetTrigger(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETTRIGGER_OFFSET))(this, playable);
		}
		*/

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		static ::System::Int32 op_Implicit(::MoleMole::Photo::FPlayableGraphAnimatorControllerParam& param)
		{
			return ((::System::Int32(*)(::MoleMole::Photo::FPlayableGraphAnimatorControllerParam&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_OP_IMPLICIT_OFFSET))(param);
		}
	};
}
