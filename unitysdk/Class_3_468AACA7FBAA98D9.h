#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D5D79026DF54CDAC.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Collect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC419505_102;

#define CLASS_3_468AACA7FBAA98D9_METHOD_3_01CF51C17CA9CF45_OFFSET UNITYSDK_OFFSET(0x7ACD3B0)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_28092AE644740F78_OFFSET UNITYSDK_OFFSET(0x7ACCFA0)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_4ABC2F9678C4F669_OFFSET UNITYSDK_OFFSET(0x7ACD730)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_5BEDCA4A57E34227_OFFSET UNITYSDK_OFFSET(0x7ACD7C0)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_FC681A4BD4FBDE26_OFFSET UNITYSDK_OFFSET(0x7ACD810)
#define CLASS_3_468AACA7FBAA98D9__CTOR_OFFSET UNITYSDK_OFFSET(0x7ACD350)

inline static constexpr unsigned int Class_3_468AACA7FBAA98D9_TypeDefinitionIndex = 72761;

class Class_3_468AACA7FBAA98D9 : public ::Class_2_D5D79026DF54CDAC<::MoleMole::UIUrbanMapRightStreetInfoContext_Collect*>
{
public:
	::Class_0_16E4307DCC419505_102<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Field_3_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28092AE644740F78(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_28092AE644740F78_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>* Method_3_01CF51C17CA9CF45()
	{
		return ((::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_01CF51C17CA9CF45_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_3_4ABC2F9678C4F669()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_4ABC2F9678C4F669_OFFSET))(this);
	}

	::System::Void Method_3_5BEDCA4A57E34227(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_5BEDCA4A57E34227_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_FC681A4BD4FBDE26(::MoleMole::UIUrbanMapCollectListRowWidgetContext* a1, ::MoleMole::UIUrbanMapCollectListRowWidgetContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_FC681A4BD4FBDE26_OFFSET))(this, a1, a2);
	}
};
