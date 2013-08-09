/*
  * Copyright (C) 2011 Cameron White
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
  
#ifndef AUDIO_STOPNOTEEVENT_H
#define AUDIO_STOPNOTEEVENT_H

#include "midievent.h"
#include <boost/cstdint.hpp>

class StopNoteEvent : public MidiEvent
{
public:
    StopNoteEvent(int channel, double startTime, int position, int system,
                  uint8_t pitch);

    void performEvent(MidiOutputDevice &device) const;

private:
    const uint8_t myPitch;
};

#endif
