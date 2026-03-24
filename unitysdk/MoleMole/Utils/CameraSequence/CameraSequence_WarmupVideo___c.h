#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7921780)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x79217C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_0_OFFSET UNITYSDK_OFFSET(0x79217D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_1_OFFSET UNITYSDK_OFFSET(0x79217E0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_WarmupVideo___c_TypeDefinitionIndex = 56147;

	class CameraSequence_WarmupVideo___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::CameraSequence::CameraSequence_WarmupVideo___c** StaticGet___9()
		{
			return (::MoleMole::Utils::CameraSequence::CameraSequence_WarmupVideo___c**)Il2CppClass::FromTypeDefinitionIndex(CameraSequence_WarmupVideo___c_TypeDefinitionIndex)->GetStaticField(0x3DA10);
		}
		static ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequence_WarmupVideo___c_TypeDefinitionIndex)->GetStaticField(0x3DA18);
		}
		static ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>** StaticGet___9__10_1()
		{
			return (::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequence_WarmupVideo___c_TypeDefinitionIndex)->GetStaticField(0x3DA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CTOR_OFFSET))(this);
		}

		::System::Void __WarmupVideo_b__10_0(::MoleMole::MultipleVideoPlayerManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_0_OFFSET))(this, manager);
		}

		::System::Void __WarmupVideo_b__10_1(::MoleMole::MultipleVideoPlayerManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_1_OFFSET))(this, manager);
		}
	};
}
