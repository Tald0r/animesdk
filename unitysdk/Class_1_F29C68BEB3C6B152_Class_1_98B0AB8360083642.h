#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_98B0AB8360083642_METHOD_1_9669E3AD030833CB_OFFSET UNITYSDK_OFFSET(0xBDDAAB0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_98B0AB8360083642_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xBDDABD0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_98B0AB8360083642__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDAAA0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_98B0AB8360083642_TypeDefinitionIndex = 74271;

class Class_1_F29C68BEB3C6B152_Class_1_98B0AB8360083642 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_5; // 0x18
	::MoleMole::UIGeneralToggleWidgetController* Field_1_0; // 0x20
	::System::Action_1<::System::Action*>* Field_1_4; // 0x28
	::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* Field_1_2; // 0x30
	::System::Boolean Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_98B0AB8360083642__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9669E3AD030833CB(::MoleMole::UIGeneralToggleWidgetController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralToggleWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_98B0AB8360083642_METHOD_1_9669E3AD030833CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_98B0AB8360083642_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
