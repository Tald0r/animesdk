#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::IO { class FileInfo; }

#define FOUNDATION_FILEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA5DA50)
#define FOUNDATION_FILEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5DA90)
#define FOUNDATION_FILEHELPER___C__DELETEFILES_B__35_0_OFFSET UNITYSDK_OFFSET(0x1AA5DAA0)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper___c_TypeDefinitionIndex = 7958;

	class FileHelper___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::IO::FileInfo*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::System::IO::FileInfo*>**)Il2CppClass::FromTypeDefinitionIndex(FileHelper___c_TypeDefinitionIndex)->GetStaticField(0x6CD0);
		}
		static ::Foundation::FileHelper___c** StaticGet___9()
		{
			return (::Foundation::FileHelper___c**)Il2CppClass::FromTypeDefinitionIndex(FileHelper___c_TypeDefinitionIndex)->GetStaticField(0x6CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteFiles_b__35_0(::System::IO::FileInfo* fi)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__DELETEFILES_B__35_0_OFFSET))(this, fi);
		}
	};
}
