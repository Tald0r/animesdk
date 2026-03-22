#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_819E8EBE0335DEC6_METHOD_2_009665971B655F1D_OFFSET UNITYSDK_OFFSET(0x9FC2100)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x9FC2430)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x9FC2050)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x9FC2910)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x9FC28E0)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x9FC2900)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9FC28F0)
#define CLASS_2_819E8EBE0335DEC6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9FC2880)
#define CLASS_2_819E8EBE0335DEC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FC1FD0)
#define CLASS_2_819E8EBE0335DEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC2040)

inline static constexpr unsigned int Class_2_819E8EBE0335DEC6_TypeDefinitionIndex = 61034;

class Class_2_819E8EBE0335DEC6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x11E; // 0x0
	::System::Int32 Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_009665971B655F1D(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_009665971B655F1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_9EF64292D3DA5796_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_819E8EBE0335DEC6_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}
};
