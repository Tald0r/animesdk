#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKUTILITIES_FIXSLASHES_1_OFFSET UNITYSDK_OFFSET(0x1B0084E0)
#define AKUTILITIES_FIXSLASHES_OFFSET UNITYSDK_OFFSET(0x1B008340)
#define AKUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B008510)

inline static constexpr unsigned int AkUtilities_TypeDefinitionIndex = 30043;

class AkUtilities : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUTILITIES__CTOR_OFFSET))(this);
	}

	static ::System::Void FixSlashes(::System::String*& path, ::System::Char separatorChar, ::System::Char badChar, ::System::Boolean addTrailingSlash)
	{
		return ((::System::Void(*)(::System::String*&, ::System::Char, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUTILITIES_FIXSLASHES_OFFSET))(path, separatorChar, badChar, addTrailingSlash);
	}

	static ::System::Void FixSlashes_1(::System::String*& path)
	{
		return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + AKUTILITIES_FIXSLASHES_1_OFFSET))(path);
	}
};
