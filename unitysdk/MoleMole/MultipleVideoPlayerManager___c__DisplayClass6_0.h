#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x7F1F880)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__0_OFFSET UNITYSDK_OFFSET(0x7F1F890)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__1_OFFSET UNITYSDK_OFFSET(0x7F1F8C0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__2_OFFSET UNITYSDK_OFFSET(0x7F1F940)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager___c__DisplayClass6_0_TypeDefinitionIndex = 45549;

	class MultipleVideoPlayerManager___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo* videoPlayerBindInfo; // 0x10
		::MoleMole::MultipleVideoPlayerManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _Prepare_b__0(::Class_1_7ECB9691B142D586* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__0_OFFSET))(this, helper);
		}

		::System::Void _Prepare_b__1(::Class_1_7ECB9691B142D586* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__1_OFFSET))(this, helper);
		}

		::System::Void _Prepare_b__2(::Class_1_7ECB9691B142D586* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__2_OFFSET))(this, helper);
		}
	};
}
