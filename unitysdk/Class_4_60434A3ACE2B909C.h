#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_60434A3ACE2B909C_METHOD_4_1C5158B2DF91A2F7_OFFSET UNITYSDK_OFFSET(0x7B7FD70)
#define CLASS_4_60434A3ACE2B909C__CTOR_OFFSET UNITYSDK_OFFSET(0x7B7FE10)

inline static constexpr unsigned int Class_4_60434A3ACE2B909C_TypeDefinitionIndex = 60483;

class Class_4_60434A3ACE2B909C : public ::Class_3_BC82EF9085BE2056
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60434A3ACE2B909C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_1C5158B2DF91A2F7()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60434A3ACE2B909C_METHOD_4_1C5158B2DF91A2F7_OFFSET))(this);
	}
};
