#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathUtils_IndexedPathDistance.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define PATHUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ABE9F0)
#define PATHUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABEA30)
#define PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__5_0_OFFSET UNITYSDK_OFFSET(0x15ABEA40)
#define PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__5_1_OFFSET UNITYSDK_OFFSET(0x15ABEAA0)

inline static constexpr unsigned int PathUtils___c_TypeDefinitionIndex = 77521;

class PathUtils___c : public ::System::Object
{
public:
	static ::System::Func_2<::PathUtils_IndexedPathDistance, ::System::Int32>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::PathUtils_IndexedPathDistance, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x3DF30);
	}
	static ::System::Comparison_1<::PathUtils_IndexedPathDistance>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::PathUtils_IndexedPathDistance>**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x3DF38);
	}
	static ::PathUtils___c** StaticGet___9()
	{
		return (::PathUtils___c**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x3DF40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PATHUTILS___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHUTILS___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _FindNearestPointsByPath_b__5_0(::PathUtils_IndexedPathDistance a, ::PathUtils_IndexedPathDistance b)
	{
		return ((::System::Int32(*)(::PVOID, ::PathUtils_IndexedPathDistance, ::PathUtils_IndexedPathDistance))((::PBYTE)hIl2Cpp + PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__5_0_OFFSET))(this, a, b);
	}

	::System::Int32 _FindNearestPointsByPath_b__5_1(::PathUtils_IndexedPathDistance item)
	{
		return ((::System::Int32(*)(::PVOID, ::PathUtils_IndexedPathDistance))((::PBYTE)hIl2Cpp + PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__5_1_OFFSET))(this, item);
	}
};
