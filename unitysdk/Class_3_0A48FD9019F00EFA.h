#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_4C4816AD446DEFA2.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class MonoVOPathParticle;

#define CLASS_3_0A48FD9019F00EFA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x835F860)
#define CLASS_3_0A48FD9019F00EFA_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x835F9F0)
#define CLASS_3_0A48FD9019F00EFA_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x835F950)
#define CLASS_3_0A48FD9019F00EFA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x835F7B0)
#define CLASS_3_0A48FD9019F00EFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x835F8C0)
#define CLASS_3_0A48FD9019F00EFA__CTOR_OFFSET UNITYSDK_OFFSET(0x835F940)

inline static constexpr unsigned int Class_3_0A48FD9019F00EFA_TypeDefinitionIndex = 58636;

class Class_3_0A48FD9019F00EFA : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xB1; // 0x0
	::MonoVOPathParticle* Field_3_1; // 0x48
	::MoleMole::EntityHandle Field_3_0; // 0x50
	::System::Single Field_3_5; // 0x60
	::System::Boolean Field_3_6; // 0x64
	::Enum_3_4C4816AD446DEFA2 Field_3_2; // 0x68
	::System::Single Field_3_4; // 0x6C
	::System::Single Field_3_3; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0A48FD9019F00EFA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A48FD9019F00EFA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A48FD9019F00EFA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A48FD9019F00EFA_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_0A48FD9019F00EFA* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_0A48FD9019F00EFA*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0A48FD9019F00EFA_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A48FD9019F00EFA_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
