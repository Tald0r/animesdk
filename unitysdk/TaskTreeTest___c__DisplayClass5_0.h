#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AA2FAB933F36B228;
class Class_3_8A4D97143C80812C_1;
class TaskTreeTest;

#define TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__0_OFFSET UNITYSDK_OFFSET(0x1664C550)
#define TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__1_OFFSET UNITYSDK_OFFSET(0x1664C610)
#define TASKTREETEST___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1664C540)

inline static constexpr unsigned int TaskTreeTest___c__DisplayClass5_0_TypeDefinitionIndex = 78730;

class TaskTreeTest___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_3_8A4D97143C80812C_1* taskLayer; // 0x10
	::TaskTreeTest* __4__this; // 0x18
	::Class_1_AA2FAB933F36B228* taskTree; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildTree_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__0_OFFSET))(this);
	}

	::System::Void _BuildTree_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__1_OFFSET))(this);
	}
};
