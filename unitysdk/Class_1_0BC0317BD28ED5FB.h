#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1747DAB17F36B4DF;

#define CLASS_1_0BC0317BD28ED5FB_INIT_OFFSET UNITYSDK_OFFSET(0x61359B0)
#define CLASS_1_0BC0317BD28ED5FB_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x6135A40)
#define CLASS_1_0BC0317BD28ED5FB_ONSYNC_OFFSET UNITYSDK_OFFSET(0x6135400)
#define CLASS_1_0BC0317BD28ED5FB_POLISH_OFFSET UNITYSDK_OFFSET(0x61358A0)
#define CLASS_1_0BC0317BD28ED5FB_RECYCLE_OFFSET UNITYSDK_OFFSET(0x6135900)
#define CLASS_1_0BC0317BD28ED5FB__CTOR_OFFSET UNITYSDK_OFFSET(0x6135A30)

inline static constexpr unsigned int Class_1_0BC0317BD28ED5FB_TypeDefinitionIndex = 54231;

class Class_1_0BC0317BD28ED5FB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BC0317BD28ED5FB__CTOR_OFFSET))(this);
	}

	::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BC0317BD28ED5FB_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BC0317BD28ED5FB_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BC0317BD28ED5FB_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_1_0BC0317BD28ED5FB_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_0BC0317BD28ED5FB* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_0BC0317BD28ED5FB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BC0317BD28ED5FB_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
