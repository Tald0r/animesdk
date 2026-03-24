#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MONOUITABLESCROLLV2_TEMPLATEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F26B50)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_CREATESCROLLVIEWITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x9F26310)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_CREATESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x9F25FA0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x9F269A0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_GETTEMPLATECELLSIZE_OFFSET UNITYSDK_OFFSET(0x9F25ED0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_RECYCLE_OFFSET UNITYSDK_OFFSET(0x9F264F0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_SETTEMPLATECELL_OFFSET UNITYSDK_OFFSET(0x9F25E60)
#define MONOUITABLESCROLLV2_TEMPLATEDATA_TEMPRECYCLE_OFFSET UNITYSDK_OFFSET(0x9F26800)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__18_0_OFFSET UNITYSDK_OFFSET(0x9F26BC0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__18_1_OFFSET UNITYSDK_OFFSET(0x9F26C30)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9F25C50)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9F25CD0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9F25D60)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9F25DE0)
#define MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F25BD0)

inline static constexpr unsigned int MonoUITableScrollV2_TemplateData_TypeDefinitionIndex = 64429;

class MonoUITableScrollV2_TemplateData : public ::System::Object
{
public:
	::System::Func_2<::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* _easyCreateFunc; // 0x10
	::System::Func_3<::Enum_3_340DE32BA097F66C, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* _createFunc; // 0x18
	::System::Func_2<::Struct_2_575273D27F02957E, ::MoleMole::ScrollViewItemWidgetController*>* _binderCreateFunc; // 0x20
	::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewItemWidgetController*>* _freeList; // 0x28
	::Struct_2_575273D27F02957E _binderInfo; // 0x30
	::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewItemWidgetController*>* _tempFreeList; // 0x40
	::MoleMole::UIControlReference* _templateCell; // 0x48
	::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* _createFuncByIndex; // 0x50
	::System::Nullable_1<::UnityEngine::Vector2> _cellSize; // 0x58
	::System::Boolean _userBinder; // 0x64
	::Enum_3_340DE32BA097F66C _ctrlId; // 0x68

	::System::Void _ctor(::MoleMole::UIControlReference* templateCell, ::Enum_3_340DE32BA097F66C ctrlId, ::System::Func_3<::Enum_3_340DE32BA097F66C, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* createFunc)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*, ::Enum_3_340DE32BA097F66C, ::System::Func_3<::Enum_3_340DE32BA097F66C, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_OFFSET))(this, templateCell, ctrlId, createFunc);
	}

	::System::Void _ctor_1(::MoleMole::UIControlReference* templateCell, ::System::Func_2<::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* createFunc)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*, ::System::Func_2<::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_1_OFFSET))(this, templateCell, createFunc);
	}

	::System::Void _ctor_2(::Struct_2_575273D27F02957E& binderInfo, ::System::Func_2<::Struct_2_575273D27F02957E, ::MoleMole::ScrollViewItemWidgetController*>* binderCreateFunc)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::System::Func_2<::Struct_2_575273D27F02957E, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_2_OFFSET))(this, binderInfo, binderCreateFunc);
	}

	::System::Void _ctor_3(::System::Func_2<::Struct_2_575273D27F02957E, ::MoleMole::ScrollViewItemWidgetController*>* binderCreateFunc)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Struct_2_575273D27F02957E, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_3_OFFSET))(this, binderCreateFunc);
	}

	::System::Void _ctor_4(::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* createFunc)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CTOR_4_OFFSET))(this, createFunc);
	}

	::System::Void SetTemplateCell(::MoleMole::UIControlReference* templateCell)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_SETTEMPLATECELL_OFFSET))(this, templateCell);
	}

	::UnityEngine::Vector2 GetTemplateCellSize()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_GETTEMPLATECELLSIZE_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItem()
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_CREATESCROLLVIEWITEM_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItemByIndex(::System::Int32 index)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_CREATESCROLLVIEWITEMBYINDEX_OFFSET))(this, index);
	}

	::System::Void Recycle(::MoleMole::ScrollViewItemWidgetController* item)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_RECYCLE_OFFSET))(this, item);
	}

	::System::Void TempRecycle(::MoleMole::ScrollViewItemWidgetController* item)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_TEMPRECYCLE_OFFSET))(this, item);
	}

	::System::Void FlushAllTempRecycleItemToRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA_CLEAR_OFFSET))(this);
	}

	::MoleMole::UIControlReference* _CreateScrollViewItem_b__18_0()
	{
		return ((::MoleMole::UIControlReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__18_0_OFFSET))(this);
	}

	::MoleMole::UIControlReference* _CreateScrollViewItem_b__18_1()
	{
		return ((::MoleMole::UIControlReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPLATEDATA__CREATESCROLLVIEWITEM_B__18_1_OFFSET))(this);
	}
};
