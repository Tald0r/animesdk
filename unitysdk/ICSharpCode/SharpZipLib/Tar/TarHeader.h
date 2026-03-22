#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_CLONE_OFFSET UNITYSDK_OFFSET(0x1A276FE0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_COMPUTECHECKSUM_OFFSET UNITYSDK_OFFSET(0x1A279CF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A279EC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETASCIIBYTES_OFFSET UNITYSDK_OFFSET(0x1A279B70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETCHECKSUMOCTALBYTES_OFFSET UNITYSDK_OFFSET(0x1A279DB0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETCTIME_OFFSET UNITYSDK_OFFSET(0x1A279AE0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETDATETIMEFROMCTIME_OFFSET UNITYSDK_OFFSET(0x1A278D50)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A279E30)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETLONGOCTALBYTES_OFFSET UNITYSDK_OFFSET(0x1A279A70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_1_OFFSET UNITYSDK_OFFSET(0x1A27A230)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_2_OFFSET UNITYSDK_OFFSET(0x1A27A420)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_3_OFFSET UNITYSDK_OFFSET(0x1A279850)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A27A150)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAME_OFFSET UNITYSDK_OFFSET(0x1A276BF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETOCTALBYTES_OFFSET UNITYSDK_OFFSET(0x1A279920)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_CHECKSUM_OFFSET UNITYSDK_OFFSET(0x1A276F10)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_DEVMAJOR_OFFSET UNITYSDK_OFFSET(0x1A276FA0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_DEVMINOR_OFFSET UNITYSDK_OFFSET(0x1A276FC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A276C40)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1A276F90)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_ISCHECKSUMVALID_OFFSET UNITYSDK_OFFSET(0x1A276F20)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_LINKNAME_OFFSET UNITYSDK_OFFSET(0x1A276F50)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_MAGIC_OFFSET UNITYSDK_OFFSET(0x1A276F60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A276C00)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_MODTIME_OFFSET UNITYSDK_OFFSET(0x1A276C70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A276BE0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A276C60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_TYPEFLAG_OFFSET UNITYSDK_OFFSET(0x1A276F30)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1A276C20)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A276F80)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1A276F70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_MAKECHECKSUM_OFFSET UNITYSDK_OFFSET(0x1A278EA0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_PARSEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A277080)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_PARSENAME_OFFSET UNITYSDK_OFFSET(0x1A278A80)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_PARSEOCTAL_OFFSET UNITYSDK_OFFSET(0x1A278C60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_RESTORESETVALUES_OFFSET UNITYSDK_OFFSET(0x1A27A0C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SETVALUEDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1A27A020)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_DEVMAJOR_OFFSET UNITYSDK_OFFSET(0x1A276FB0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_DEVMINOR_OFFSET UNITYSDK_OFFSET(0x1A276FD0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A276C50)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1A276B50)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_LINKNAME_OFFSET UNITYSDK_OFFSET(0x1A276A80)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_MAGIC_OFFSET UNITYSDK_OFFSET(0x1A276930)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A276C10)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_MODTIME_OFFSET UNITYSDK_OFFSET(0x1A276C80)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A276A10)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A276B70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_TYPEFLAG_OFFSET UNITYSDK_OFFSET(0x1A276F40)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1A276C30)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A276AF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1A2769A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x1A2792E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A27A500)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A276680)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarHeader_TypeDefinitionIndex = 6682;

	class TarHeader : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_groupNameAsSet()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x5B40);
		}
		static ::System::String** StaticGet_defaultUser()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x5B48);
		}
		static ::System::String** StaticGet_defaultGroupName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x5B50);
		}
		static ::System::String** StaticGet_userNameAsSet()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x5B58);
		}
		static ::System::Int32* StaticGet_groupIdAsSet()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x3130);
		}
		static ::System::Int32* StaticGet_defaultUserId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x3134);
		}
		static ::System::Int32* StaticGet_defaultGroupId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x3138);
		}
		static ::System::Int32* StaticGet_userIdAsSet()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x313C);
		}
		static ::System::DateTime* StaticGet_dateTime1970()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TarHeader_TypeDefinitionIndex)->GetStaticField(0x3140);
		}
		// static const ::System::Int32 NAMELEN = 0x64; // 0x0
		// static const ::System::Int32 MODELEN = 0x8; // 0x0
		// static const ::System::Int32 UIDLEN = 0x8; // 0x0
		// static const ::System::Int32 GIDLEN = 0x8; // 0x0
		// static const ::System::Int32 CHKSUMLEN = 0x8; // 0x0
		// static const ::System::Int32 CHKSUMOFS = 0x94; // 0x0
		// static const ::System::Int32 SIZELEN = 0xC; // 0x0
		// static const ::System::Int32 MAGICLEN = 0x6; // 0x0
		// static const ::System::Int32 VERSIONLEN = 0x2; // 0x0
		// static const ::System::Int32 MODTIMELEN = 0xC; // 0x0
		// static const ::System::Int32 UNAMELEN = 0x20; // 0x0
		// static const ::System::Int32 GNAMELEN = 0x20; // 0x0
		// static const ::System::Int32 DEVLEN = 0x8; // 0x0
		// static const ::System::Byte LF_OLDNORM = 0x0; // 0x0
		// static const ::System::Byte LF_NORMAL = 0x30; // 0x0
		// static const ::System::Byte LF_LINK = 0x31; // 0x0
		// static const ::System::Byte LF_SYMLINK = 0x32; // 0x0
		// static const ::System::Byte LF_CHR = 0x33; // 0x0
		// static const ::System::Byte LF_BLK = 0x34; // 0x0
		// static const ::System::Byte LF_DIR = 0x35; // 0x0
		// static const ::System::Byte LF_FIFO = 0x36; // 0x0
		// static const ::System::Byte LF_CONTIG = 0x37; // 0x0
		// static const ::System::Byte LF_GHDR = 0x67; // 0x0
		// static const ::System::Byte LF_XHDR = 0x78; // 0x0
		// static const ::System::Byte LF_ACL = 0x41; // 0x0
		// static const ::System::Byte LF_GNU_DUMPDIR = 0x44; // 0x0
		// static const ::System::Byte LF_EXTATTR = 0x45; // 0x0
		// static const ::System::Byte LF_META = 0x49; // 0x0
		// static const ::System::Byte LF_GNU_LONGLINK = 0x4B; // 0x0
		// static const ::System::Byte LF_GNU_LONGNAME = 0x4C; // 0x0
		// static const ::System::Byte LF_GNU_MULTIVOL = 0x4D; // 0x0
		// static const ::System::Byte LF_GNU_NAMES = 0x4E; // 0x0
		// static const ::System::Byte LF_GNU_SPARSE = 0x53; // 0x0
		// static const ::System::Byte LF_GNU_VOLHDR = 0x56; // 0x0
		// static const ::System::String* TMAGIC; // 0x0
		// static const ::System::String* GNU_TMAGIC; // 0x0
		// static const ::System::Int64 timeConversionFactor = 0x989680; // 0x0
		::System::String* version; // 0x10
		::System::String* userName; // 0x18
		::System::String* groupName; // 0x20
		::System::String* magic; // 0x28
		::System::String* linkName; // 0x30
		::System::String* name; // 0x38
		::System::Int32 userId; // 0x40
		::System::Int32 mode; // 0x44
		::System::DateTime modTime; // 0x48
		::System::Int64 size; // 0x50
		::System::Int32 groupId; // 0x58
		::System::Byte typeFlag; // 0x5C
		::System::Boolean isChecksumValid; // 0x5D
		::System::Int32 checksum; // 0x60
		::System::Int32 devMajor; // 0x64
		::System::Int32 devMinor; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_NAME_OFFSET))(this, value);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAME_OFFSET))(this);
		}

		::System::Int32 get_Mode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_MODE_OFFSET))(this, value);
		}

		::System::Int32 get_UserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_USERID_OFFSET))(this, value);
		}

		::System::Int32 get_GroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_GROUPID_OFFSET))(this, value);
		}

		::System::Int64 get_Size()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_SIZE_OFFSET))(this, value);
		}

		::System::DateTime get_ModTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_MODTIME_OFFSET))(this);
		}

		::System::Void set_ModTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_MODTIME_OFFSET))(this, value);
		}

		::System::Int32 get_Checksum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_CHECKSUM_OFFSET))(this);
		}

		::System::Boolean get_IsChecksumValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_ISCHECKSUMVALID_OFFSET))(this);
		}

		::System::Byte get_TypeFlag()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_TYPEFLAG_OFFSET))(this);
		}

		::System::Void set_TypeFlag(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_TYPEFLAG_OFFSET))(this, value);
		}

		::System::String* get_LinkName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_LINKNAME_OFFSET))(this);
		}

		::System::Void set_LinkName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_LINKNAME_OFFSET))(this, value);
		}

		::System::String* get_Magic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_MAGIC_OFFSET))(this);
		}

		::System::Void set_Magic(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_MAGIC_OFFSET))(this, value);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_VERSION_OFFSET))(this, value);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_USERNAME_OFFSET))(this, value);
		}

		::System::String* get_GroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_GROUPNAME_OFFSET))(this);
		}

		::System::Void set_GroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_GROUPNAME_OFFSET))(this, value);
		}

		::System::Int32 get_DevMajor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_DEVMAJOR_OFFSET))(this);
		}

		::System::Void set_DevMajor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_DEVMAJOR_OFFSET))(this, value);
		}

		::System::Int32 get_DevMinor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GET_DEVMINOR_OFFSET))(this);
		}

		::System::Void set_DevMinor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SET_DEVMINOR_OFFSET))(this, value);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_CLONE_OFFSET))(this);
		}

		::System::Void ParseBuffer(::Il2CppArray<::System::Byte>* header)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_PARSEBUFFER_OFFSET))(this, header);
		}

		::System::Void WriteHeader(::Il2CppArray<::System::Byte>* outBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_WRITEHEADER_OFFSET))(this, outBuffer);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Void SetValueDefaults(::System::Int32 userId, ::System::String* userName, ::System::Int32 groupId, ::System::String* groupName)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_SETVALUEDEFAULTS_OFFSET))(userId, userName, groupId, groupName);
		}

		static ::System::Void RestoreSetValues()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_RESTORESETVALUES_OFFSET))();
		}

		static ::System::Int64 ParseOctal(::Il2CppArray<::System::Byte>* header, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_PARSEOCTAL_OFFSET))(header, offset, length);
		}

		static ::System::Text::StringBuilder* ParseName(::Il2CppArray<::System::Byte>* header, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_PARSENAME_OFFSET))(header, offset, length);
		}

		static ::System::Int32 GetNameBytes(::System::Text::StringBuilder* name, ::System::Int32 nameOffset, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferOffset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_OFFSET))(name, nameOffset, buffer, bufferOffset, length);
		}

		static ::System::Int32 GetNameBytes_1(::System::String* name, ::System::Int32 nameOffset, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferOffset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_1_OFFSET))(name, nameOffset, buffer, bufferOffset, length);
		}

		static ::System::Int32 GetNameBytes_2(::System::Text::StringBuilder* name, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_2_OFFSET))(name, buffer, offset, length);
		}

		static ::System::Int32 GetNameBytes_3(::System::String* name, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETNAMEBYTES_3_OFFSET))(name, buffer, offset, length);
		}

		static ::System::Int32 GetAsciiBytes(::System::String* toAdd, ::System::Int32 nameOffset, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferOffset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETASCIIBYTES_OFFSET))(toAdd, nameOffset, buffer, bufferOffset, length);
		}

		static ::System::Int32 GetOctalBytes(::System::Int64 value, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETOCTALBYTES_OFFSET))(value, buffer, offset, length);
		}

		static ::System::Int32 GetLongOctalBytes(::System::Int64 value, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETLONGOCTALBYTES_OFFSET))(value, buffer, offset, length);
		}

		static ::System::Int32 GetCheckSumOctalBytes(::System::Int64 value, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETCHECKSUMOCTALBYTES_OFFSET))(value, buffer, offset, length);
		}

		static ::System::Int32 ComputeCheckSum(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_COMPUTECHECKSUM_OFFSET))(buffer);
		}

		static ::System::Int32 MakeCheckSum(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_MAKECHECKSUM_OFFSET))(buffer);
		}

		static ::System::Int32 GetCTime(::System::DateTime dateTime)
		{
			return ((::System::Int32(*)(::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETCTIME_OFFSET))(dateTime);
		}

		static ::System::DateTime GetDateTimeFromCTime(::System::Int64 ticks)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARHEADER_GETDATETIMEFROMCTIME_OFFSET))(ticks);
		}
	};
}
