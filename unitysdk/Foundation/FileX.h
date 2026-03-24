#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_FILEX_CREATEDIRECTORYIFNOTEXISTS_OFFSET UNITYSDK_OFFSET(0x1B216680)
#define FOUNDATION_FILEX_LOADFROMDATAPATH_ASBYTES_OFFSET UNITYSDK_OFFSET(0x1B217E00)
#define FOUNDATION_FILEX_LOADFROMDATAPATH_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1B217B00)
#define FOUNDATION_FILEX_LOADFROMPERISTANTDATAPATH_ASBYTES_OFFSET UNITYSDK_OFFSET(0x1B217800)
#define FOUNDATION_FILEX_LOADFROMPERISTANTDATAPATH_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1B217500)
#define FOUNDATION_FILEX_LOADFROM_ASBYTES_OFFSET UNITYSDK_OFFSET(0x1B217390)
#define FOUNDATION_FILEX_LOADFROM_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1B217220)
#define FOUNDATION_FILEX_SAVETODATAPATH_1_OFFSET UNITYSDK_OFFSET(0x1B217070)
#define FOUNDATION_FILEX_SAVETODATAPATH_OFFSET UNITYSDK_OFFSET(0x1B216E70)
#define FOUNDATION_FILEX_SAVETOPERSISTENTDATAPATH_1_OFFSET UNITYSDK_OFFSET(0x1B216CC0)
#define FOUNDATION_FILEX_SAVETOPERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1B216AC0)
#define FOUNDATION_FILEX_SAVETO_1_OFFSET UNITYSDK_OFFSET(0x1B2169C0)
#define FOUNDATION_FILEX_SAVETO_OFFSET UNITYSDK_OFFSET(0x1B216860)

namespace Foundation
{
	inline static constexpr unsigned int FileX_TypeDefinitionIndex = 8099;

	class FileX : public ::System::Object
	{
	public:
		static ::System::Void CreateDirectoryIfNotExists(::System::String* folder)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_CREATEDIRECTORYIFNOTEXISTS_OFFSET))(folder);
		}

		static ::System::Void SaveTo(::System::String* data, ::System::String* path)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_SAVETO_OFFSET))(data, path);
		}

		static ::System::Void SaveTo_1(::Il2CppArray<::System::Byte>* data, ::System::String* path)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_SAVETO_1_OFFSET))(data, path);
		}

		static ::System::Void SaveToPersistentDataPath(::System::String* data, ::System::String* folderName, ::System::String* filename)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_SAVETOPERSISTENTDATAPATH_OFFSET))(data, folderName, filename);
		}

		static ::System::Void SaveToPersistentDataPath_1(::Il2CppArray<::System::Byte>* data, ::System::String* folderName, ::System::String* filename)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_SAVETOPERSISTENTDATAPATH_1_OFFSET))(data, folderName, filename);
		}

		static ::System::Void SaveToDataPath(::System::String* data, ::System::String* folderName, ::System::String* filename)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_SAVETODATAPATH_OFFSET))(data, folderName, filename);
		}

		static ::System::Void SaveToDataPath_1(::Il2CppArray<::System::Byte>* data, ::System::String* folderName, ::System::String* filename)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_SAVETODATAPATH_1_OFFSET))(data, folderName, filename);
		}

		static ::System::String* LoadFrom_AsString(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_LOADFROM_ASSTRING_OFFSET))(path);
		}

		static ::Il2CppArray<::System::Byte>* LoadFrom_AsBytes(::System::String* path)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_LOADFROM_ASBYTES_OFFSET))(path);
		}

		static ::System::String* LoadFromPeristantDataPath_AsString(::System::String* filename, ::System::String* folderName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_LOADFROMPERISTANTDATAPATH_ASSTRING_OFFSET))(filename, folderName);
		}

		static ::Il2CppArray<::System::Byte>* LoadFromPeristantDataPath_AsBytes(::System::String* filename, ::System::String* folderName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_LOADFROMPERISTANTDATAPATH_ASBYTES_OFFSET))(filename, folderName);
		}

		static ::System::String* LoadFromDataPath_AsString(::System::String* filename, ::System::String* folderName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_LOADFROMDATAPATH_ASSTRING_OFFSET))(filename, folderName);
		}

		static ::Il2CppArray<::System::Byte>* LoadFromDataPath_AsBytes(::System::String* filename, ::System::String* folderName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEX_LOADFROMDATAPATH_ASBYTES_OFFSET))(filename, folderName);
		}
	};
}
