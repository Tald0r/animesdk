#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BEBD25AEE023D17D_Struct_2_86E2C9F91D6C0C5F.h"
#include "unitysdk/System/ValueType.h"

class Class_2_BEBD25AEE023D17D;
namespace System { class Object; }

#define CLASS_2_BEBD25AEE023D17D_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F1A90)
#define CLASS_2_BEBD25AEE023D17D_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x37BFB0)
#define CLASS_2_BEBD25AEE023D17D_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8F1AD0)
#define CLASS_2_BEBD25AEE023D17D_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8F1AE0)
#define CLASS_2_BEBD25AEE023D17D_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8F1B60)
#define CLASS_2_BEBD25AEE023D17D_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1A80)

inline static constexpr unsigned int Class_2_BEBD25AEE023D17D_Enumerator_TypeDefinitionIndex = 79811;

struct alignas(8) Class_2_BEBD25AEE023D17D_Enumerator
{
	::Class_2_BEBD25AEE023D17D* mgr; // 0x10
	::System::Int32 version; // 0x18
	::Class_2_BEBD25AEE023D17D_Struct_2_86E2C9F91D6C0C5F current; // 0x1C
	::System::Int32 minx; // 0x2C
	::System::Int32 miny; // 0x30
	::System::Int32 maxX; // 0x34
	::System::Int32 maxY; // 0x38
	::System::Int32 indexX; // 0x3C
	::System::Int32 indexY; // 0x40
	::System::Int32 indexCell; // 0x44

	::System::Void _ctor(::Class_2_BEBD25AEE023D17D* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BEBD25AEE023D17D*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEBD25AEE023D17D_ENUMERATOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBD25AEE023D17D_ENUMERATOR_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBD25AEE023D17D_ENUMERATOR_MOVENEXT_OFFSET))(this);
	}

	::Class_2_BEBD25AEE023D17D_Struct_2_86E2C9F91D6C0C5F get_Current()
	{
		return ((::Class_2_BEBD25AEE023D17D_Struct_2_86E2C9F91D6C0C5F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBD25AEE023D17D_ENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBD25AEE023D17D_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBD25AEE023D17D_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}
};
