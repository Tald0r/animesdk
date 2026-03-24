#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_2_57587AE61BE1CFFD;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xA287620)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0xA2877C0)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA287540)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52__CTOR_OFFSET UNITYSDK_OFFSET(0xA287530)

inline static constexpr unsigned int Class_2_57587AE61BE1CFFD_Class_1_7487C45A5C74DC52_TypeDefinitionIndex = 53502;

class Class_2_57587AE61BE1CFFD_Class_1_7487C45A5C74DC52 : public ::System::Object
{
public:
	::Class_2_57587AE61BE1CFFD* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::Enum_3_F00DC819D834EFD2 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_7487C45A5C74DC52_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}
};
