#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_697B1639EB957863.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowItemOptionsUpGradeControllerContext; }
namespace MoleMole { class UIHollowItemOptionsUpGradePopWindowController; }

#define CLASS_1_78F4EE2310E558BA_METHOD_1_884CA55598713A43_OFFSET UNITYSDK_OFFSET(0x996E280)
#define CLASS_1_78F4EE2310E558BA_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x996E400)
#define CLASS_1_78F4EE2310E558BA_METHOD_1_DDE4869CACB09923_OFFSET UNITYSDK_OFFSET(0x996E470)
#define CLASS_1_78F4EE2310E558BA__CTOR_OFFSET UNITYSDK_OFFSET(0x996E230)

inline static constexpr unsigned int Class_1_78F4EE2310E558BA_TypeDefinitionIndex = 67002;

class Class_1_78F4EE2310E558BA : public ::System::Object
{
public:
	::MoleMole::UIHollowItemOptionsUpGradeControllerContext* Field_1_0; // 0x10
	::Enum_3_697B1639EB957863 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA__CTOR_OFFSET))(this);
	}

	::MoleMole::UIHollowItemOptionsUpGradePopWindowController* Method_1_884CA55598713A43()
	{
		return ((::MoleMole::UIHollowItemOptionsUpGradePopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA_METHOD_1_884CA55598713A43_OFFSET))(this);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_697B1639EB957863 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_697B1639EB957863))((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDE4869CACB09923(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78F4EE2310E558BA_METHOD_1_DDE4869CACB09923_OFFSET))(this, a1, a2, a3);
	}
};
