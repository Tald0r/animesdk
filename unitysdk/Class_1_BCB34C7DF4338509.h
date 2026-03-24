#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralConsoleBaseBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_BCB34C7DF4338509_METHOD_1_0B5F7BD0B5A8D2DF_OFFSET UNITYSDK_OFFSET(0x8104490)
#define CLASS_1_BCB34C7DF4338509_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x8104780)
#define CLASS_1_BCB34C7DF4338509_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x81042E0)
#define CLASS_1_BCB34C7DF4338509__CTOR_OFFSET UNITYSDK_OFFSET(0x8104250)

inline static constexpr unsigned int Class_1_BCB34C7DF4338509_TypeDefinitionIndex = 47243;

class Class_1_BCB34C7DF4338509 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralConsoleBaseBtnWidgetController*>* Field_1_0; // 0x10
	::MoleMole::UIBaseController* Field_1_2; // 0x18
	::UnityEngine::RectTransform* Field_1_1; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Int32 Method_1_0B5F7BD0B5A8D2DF(::MoleMole::UIGeneralConsoleBaseBtnWidgetController* a1, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController*, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509_METHOD_1_0B5F7BD0B5A8D2DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCB34C7DF4338509_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}
};
