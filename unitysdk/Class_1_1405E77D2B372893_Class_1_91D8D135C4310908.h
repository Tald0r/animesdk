#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_1405E77D2B372893;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908_METHOD_1_2CA7A456F23971D0_OFFSET UNITYSDK_OFFSET(0xA8C8D10)
#define CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908_METHOD_1_46E59C72F1CFB0B7_OFFSET UNITYSDK_OFFSET(0xA8C9160)
#define CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908_METHOD_1_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0xA8C8DA0)
#define CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C8D00)

inline static constexpr unsigned int Class_1_1405E77D2B372893_Class_1_91D8D135C4310908_TypeDefinitionIndex = 52824;

class Class_1_1405E77D2B372893_Class_1_91D8D135C4310908 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::UnityEngine::UI::Image* Field_1_1; // 0x18
	::System::Action_1<::Foundation::AssetRequestHandle>* Field_1_4; // 0x20
	::Class_1_1405E77D2B372893* Field_1_2; // 0x28
	::Foundation::AssetPath Field_1_0; // 0x30
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CA7A456F23971D0(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908_METHOD_1_2CA7A456F23971D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908_METHOD_1_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_1_46E59C72F1CFB0B7(::UnityEngine::Sprite* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1405E77D2B372893_CLASS_1_91D8D135C4310908_METHOD_1_46E59C72F1CFB0B7_OFFSET))(this, a1, a2);
	}
};
