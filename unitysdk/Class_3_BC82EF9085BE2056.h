#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F23387128C3B493.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BC82EF9085BE2056_METHOD_3_876D9196A7FD556F_OFFSET UNITYSDK_OFFSET(0xF42B010)
#define CLASS_3_BC82EF9085BE2056_METHOD_3_FCE3B6D0C42894BC_OFFSET UNITYSDK_OFFSET(0xF42B2B0)
#define CLASS_3_BC82EF9085BE2056__CTOR_OFFSET UNITYSDK_OFFSET(0xF42AFC0)

inline static constexpr unsigned int Class_3_BC82EF9085BE2056_TypeDefinitionIndex = 72350;

class Class_3_BC82EF9085BE2056 : public ::Class_2_2F23387128C3B493
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC82EF9085BE2056__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_876D9196A7FD556F(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BC82EF9085BE2056_METHOD_3_876D9196A7FD556F_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_3_FCE3B6D0C42894BC()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC82EF9085BE2056_METHOD_3_FCE3B6D0C42894BC_OFFSET))(this);
	}
};
