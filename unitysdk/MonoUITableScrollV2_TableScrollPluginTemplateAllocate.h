#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/MonoUITableScrollV2_TempRecycleScope.h"

class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x852FE60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_CREATESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x8530500)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x8530350)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_POPTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x8530470)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_PUSHTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x85303F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLEALLSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x852F8E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x852FAC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x852FED0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__CTOR_OFFSET UNITYSDK_OFFSET(0x852F8D0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginTemplateAllocate_TypeDefinitionIndex = 64409;

class MonoUITableScrollV2_TableScrollPluginTemplateAllocate : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Int32 _tempRecycle; // 0x18

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Void RecycleAllScrollItems()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLEALLSCROLLITEMS_OFFSET))(this);
	}

	::System::Void RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLESCROLLITEM_OFFSET))(this, scrollViewItem);
	}

	::MoleMole::ScrollViewItemWidgetController* AllocateScrollItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
	}

	::System::Void FlushAllTempRecycleItemToRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
	}

	::System::Void PushTempRecycleScope(::MonoUITableScrollV2_TempRecycleScope tempRecycleScope)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TempRecycleScope))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_PUSHTEMPRECYCLESCOPE_OFFSET))(this, tempRecycleScope);
	}

	::System::Void PopTempRecycleScope(::MonoUITableScrollV2_TempRecycleScope tempRecycleScope)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TempRecycleScope))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_POPTEMPRECYCLESCOPE_OFFSET))(this, tempRecycleScope);
	}

	::MoleMole::ScrollViewItemWidgetController* _AllocateScrollItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
	}

	::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_CREATESCROLLVIEWITEM_OFFSET))(this, dataIndex);
	}
};
