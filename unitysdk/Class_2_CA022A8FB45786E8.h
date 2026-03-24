#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CA022A8FB45786E8_METHOD_2_0B9B33C2008BAA06_OFFSET UNITYSDK_OFFSET(0x8A7D820)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x8A7DB50)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x8A7D760)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x8A7DFB0)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x8A7DFA0)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x8A7DFC0)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8A7D810)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A7DFD0)
#define CLASS_2_CA022A8FB45786E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A7D6E0)
#define CLASS_2_CA022A8FB45786E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8A7D750)

inline static constexpr unsigned int Class_2_CA022A8FB45786E8_TypeDefinitionIndex = 49327;

class Class_2_CA022A8FB45786E8 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x120; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_0B9B33C2008BAA06(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_0B9B33C2008BAA06_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_9EF64292D3DA5796_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
