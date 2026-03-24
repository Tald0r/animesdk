#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AD7FC10E29A10B_Struct_2_86E2C9F91D6C0C5F.h"
#include "unitysdk/System/ValueType.h"

class Class_2_C6AD7FC10E29A10B;
namespace System { class Object; }

#define CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AF200)
#define CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x35A5F0)
#define CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8AF240)
#define CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8AF250)
#define CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8AF2D0)
#define CLASS_2_C6AD7FC10E29A10B_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF1F0)

inline static constexpr unsigned int Class_2_C6AD7FC10E29A10B_Enumerator_TypeDefinitionIndex = 81691;

struct alignas(8) Class_2_C6AD7FC10E29A10B_Enumerator
{
	::Class_2_C6AD7FC10E29A10B* mgr; // 0x10
	::System::Int32 version; // 0x18
	::Class_2_C6AD7FC10E29A10B_Struct_2_86E2C9F91D6C0C5F current; // 0x1C
	::System::Int32 minx; // 0x2C
	::System::Int32 miny; // 0x30
	::System::Int32 maxX; // 0x34
	::System::Int32 maxY; // 0x38
	::System::Int32 indexX; // 0x3C
	::System::Int32 indexY; // 0x40
	::System::Int32 indexCell; // 0x44

	::System::Void _ctor(::Class_2_C6AD7FC10E29A10B* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C6AD7FC10E29A10B*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C6AD7FC10E29A10B_ENUMERATOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_MOVENEXT_OFFSET))(this);
	}

	::Class_2_C6AD7FC10E29A10B_Struct_2_86E2C9F91D6C0C5F get_Current()
	{
		return ((::Class_2_C6AD7FC10E29A10B_Struct_2_86E2C9F91D6C0C5F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6AD7FC10E29A10B_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}
};
