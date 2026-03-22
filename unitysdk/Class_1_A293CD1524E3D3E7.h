#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_39F32ADA6528F94C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A293CD1524E3D3E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4F4870)
#define CLASS_1_A293CD1524E3D3E7_METHOD_1_1D813177E1E93CD6_OFFSET UNITYSDK_OFFSET(0xC4F48D0)
#define CLASS_1_A293CD1524E3D3E7_METHOD_1_76C14174E094F341_OFFSET UNITYSDK_OFFSET(0xC4F4D60)
#define CLASS_1_A293CD1524E3D3E7__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F4690)

inline static constexpr unsigned int Class_1_A293CD1524E3D3E7_TypeDefinitionIndex = 45074;

class Class_1_A293CD1524E3D3E7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::GalGame::GalgameFilterType, ::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A293CD1524E3D3E7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A293CD1524E3D3E7_DISPOSE_OFFSET))(this);
	}

	::Class_1_39F32ADA6528F94C* Method_1_1D813177E1E93CD6(::MoleMole::GalGame::GalgameFilterType a1)
	{
		return ((::Class_1_39F32ADA6528F94C*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + CLASS_1_A293CD1524E3D3E7_METHOD_1_1D813177E1E93CD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_76C14174E094F341(::Class_1_39F32ADA6528F94C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_39F32ADA6528F94C*))((::PBYTE)hIl2Cpp + CLASS_1_A293CD1524E3D3E7_METHOD_1_76C14174E094F341_OFFSET))(this, a1);
	}
};
