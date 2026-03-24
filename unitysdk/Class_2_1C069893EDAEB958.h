#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace MoleMole { class MonoBasePerpStage; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1C069893EDAEB958_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x9368100)
#define CLASS_2_1C069893EDAEB958_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x9368340)
#define CLASS_2_1C069893EDAEB958_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x93680F0)
#define CLASS_2_1C069893EDAEB958_METHOD_2_34C49A82D6A320BD_OFFSET UNITYSDK_OFFSET(0x9367690)
#define CLASS_2_1C069893EDAEB958_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x9368330)
#define CLASS_2_1C069893EDAEB958_METHOD_2_EDBA017819F8B651_OFFSET UNITYSDK_OFFSET(0x9368110)
#define CLASS_2_1C069893EDAEB958_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x9367D10)
#define CLASS_2_1C069893EDAEB958_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x9367D90)
#define CLASS_2_1C069893EDAEB958_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9367E00)
#define CLASS_2_1C069893EDAEB958_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9367270)
#define CLASS_2_1C069893EDAEB958__CCTOR_OFFSET UNITYSDK_OFFSET(0x9367FD0)
#define CLASS_2_1C069893EDAEB958__CTOR_OFFSET UNITYSDK_OFFSET(0x9367FC0)

inline static constexpr unsigned int Class_2_1C069893EDAEB958_TypeDefinitionIndex = 67899;

class Class_2_1C069893EDAEB958 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoBasePerpStage*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoBasePerpStage*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1C069893EDAEB958_TypeDefinitionIndex)->GetStaticField(0x3A960);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::SceneManagement::Scene>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1C069893EDAEB958_TypeDefinitionIndex)->GetStaticField(0x3A968);
	}
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_34C49A82D6A320BD(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_METHOD_2_34C49A82D6A320BD_OFFSET))(this, a1, a2);
	}

	::MoleMole::MonoBasePerpStage* Method_2_EDBA017819F8B651(::Il2CppArray<::UnityEngine::GameObject*>* a1)
	{
		return ((::MoleMole::MonoBasePerpStage*(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_METHOD_2_EDBA017819F8B651_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1C069893EDAEB958_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
	}
};
