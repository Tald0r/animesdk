#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_8F19DA8B255A2CD0_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x774AB40)
#define CLASS_3_8F19DA8B255A2CD0_METHOD_3_746E81B695A2DFDA_OFFSET UNITYSDK_OFFSET(0x774AF50)
#define CLASS_3_8F19DA8B255A2CD0_METHOD_3_7E99AAE513189575_OFFSET UNITYSDK_OFFSET(0x774B250)
#define CLASS_3_8F19DA8B255A2CD0_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x774AEF0)
#define CLASS_3_8F19DA8B255A2CD0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x774B2D0)
#define CLASS_3_8F19DA8B255A2CD0_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x774B340)
#define CLASS_3_8F19DA8B255A2CD0_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x774AC30)
#define CLASS_3_8F19DA8B255A2CD0_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x774AAD0)
#define CLASS_3_8F19DA8B255A2CD0__CCTOR_OFFSET UNITYSDK_OFFSET(0x774ABA0)
#define CLASS_3_8F19DA8B255A2CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x774AC20)

inline static constexpr unsigned int Class_3_8F19DA8B255A2CD0_TypeDefinitionIndex = 52426;

class Class_3_8F19DA8B255A2CD0 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0xBD; // 0x0
	::Foundation::ViewObject::ViewObjectHandle Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x58
	::System::Boolean Field_3_2; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_METHOD_3_F978A1D172468895_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_746E81B695A2DFDA(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_METHOD_3_746E81B695A2DFDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_7E99AAE513189575(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_METHOD_3_7E99AAE513189575_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_8F19DA8B255A2CD0* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8F19DA8B255A2CD0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8F19DA8B255A2CD0_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
