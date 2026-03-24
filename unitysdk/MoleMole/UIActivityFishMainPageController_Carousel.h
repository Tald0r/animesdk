#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_CAROUSELNEXT_OFFSET UNITYSDK_OFFSET(0xBFA6830)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STARTCAROUSEL_OFFSET UNITYSDK_OFFSET(0xBFA62E0)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STOPCAROUSEL_OFFSET UNITYSDK_OFFSET(0xBFA6500)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CAROUSELNEXT_B__16_0_OFFSET UNITYSDK_OFFSET(0xBFA6B60)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA6980)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController_Carousel_TypeDefinitionIndex = 38653;

	class UIActivityFishMainPageController_Carousel : public ::System::Object
	{
	public:
		::Class_2_A8F5ABF31E066ED4* _image1; // 0x10
		::Class_2_9E3E3CDA608A4F58* _animation; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _iconList; // 0x20
		::System::String* _fadeOutClip; // 0x28
		::System::String* _fadeInClip; // 0x30
		::Foundation::Coroutine::CoroutineHandle _waitFadeCarouselHandle; // 0x38
		::System::Single _fadeInClipLength; // 0x3C
		::System::Single _firstCarouselTime; // 0x40
		::System::Single _fadeOutClipLength; // 0x44
		::System::Int32 _curNum; // 0x48
		::System::Boolean _isAvatar; // 0x4C
		::Foundation::Coroutine::CoroutineHandle _carouselHandle; // 0x50
		::System::Single _carouselTime; // 0x54
		::System::Int32 _maxNum; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CTOR_OFFSET))(this);
		}

		::System::Void StartCarousel(::System::Collections::Generic::List_1<::System::String*>* iconList, ::Class_2_A8F5ABF31E066ED4* image, ::Class_2_9E3E3CDA608A4F58* animation, ::System::Boolean isAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_9E3E3CDA608A4F58*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STARTCAROUSEL_OFFSET))(this, iconList, image, animation, isAvatar);
		}

		::System::Void StopCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STOPCAROUSEL_OFFSET))(this);
		}

		::System::Void CarouselNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_CAROUSELNEXT_OFFSET))(this);
		}

		::System::Void _CarouselNext_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CAROUSELNEXT_B__16_0_OFFSET))(this);
		}
	};
}
