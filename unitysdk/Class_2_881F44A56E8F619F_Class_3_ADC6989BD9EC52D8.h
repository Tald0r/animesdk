#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7F2D530A061B6231.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapRightTastListWidget02WidgetContext; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8_METHOD_3_2B45EBE62D53D449_OFFSET UNITYSDK_OFFSET(0xB67EA00)
#define CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB67E960)
#define CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB67E900)
#define CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8__CTOR_OFFSET UNITYSDK_OFFSET(0xB67E890)

inline static constexpr unsigned int Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8_TypeDefinitionIndex = 44566;

class Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8 : public ::Class_2_7F2D530A061B6231
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_3_6; // 0xA8
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_3_0; // 0xB0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* Field_3_4; // 0xB8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_3_9; // 0xC0
	::Class_2_000597E145D7A42A<::MoleMole::MonoGamepadVirtualCursor*>* Field_3_10; // 0xC8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* Field_3_5; // 0xD0
	::Class_2_000597E145D7A42A<::UnityEngine::RenderTexture*>* Field_3_1; // 0xD8
	::Class_2_000597E145D7A42A<::UnityEngine::Bounds>* Field_3_7; // 0xE0
	::Class_2_000597E145D7A42A<::UnityEngine::Rect>* Field_3_8; // 0xE8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_3_11; // 0xF0
	::Class_2_000597E145D7A42A<::System::Nullable_1<::UnityEngine::Vector3>>* Field_3_3; // 0xF8
	::Class_2_000597E145D7A42A<::System::Int32>* Field_3_2; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_2B45EBE62D53D449(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8*>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_3_ADC6989BD9EC52D8_METHOD_3_2B45EBE62D53D449_OFFSET))(this, a1, a2);
	}
};
