#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicScreenInfo; }

#define CLASS_1_3B1E672EB76288CF_COMPARE_OFFSET UNITYSDK_OFFSET(0xB556230)
#define CLASS_1_3B1E672EB76288CF__CTOR_OFFSET UNITYSDK_OFFSET(0xB5562D0)

inline static constexpr unsigned int Class_1_3B1E672EB76288CF_TypeDefinitionIndex = 62325;

class Class_1_3B1E672EB76288CF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1E672EB76288CF__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::MoleMole::ComicScreenInfo* a1, ::MoleMole::ComicScreenInfo* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ComicScreenInfo*, ::MoleMole::ComicScreenInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3B1E672EB76288CF_COMPARE_OFFSET))(this, a1, a2);
	}
};
